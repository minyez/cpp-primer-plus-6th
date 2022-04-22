#include <ostream>
#include <string>
using std::string;
using std::ostream;

class abstr_emp
{
    private:
        string fname;
        string lname;
        string job;
    protected:
        void Get();
        void Data() const;
    public:
        abstr_emp(): fname("None"), lname("None"), job("None") {}
        abstr_emp(const string &fn, const string &ln, const string &j):
            fname(fn), lname(ln), job(j) {}
        virtual void ShowAll() const { Data(); }
        virtual void SetAll() { Get(); }
        friend ostream & operator<<(ostream &os, const abstr_emp &e);
        virtual ~abstr_emp() = 0;
};

class employee: public abstr_emp
{
    public:
        employee(): abstr_emp() {}
        employee(const string &fn, const string &ln, const string &j):
            abstr_emp(fn, ln, j) {}
        ~employee() {};
        virtual void ShowAll() const { abstr_emp::ShowAll(); };
        virtual void SetAll() { abstr_emp::SetAll(); }
};

class manager: virtual public abstr_emp
{
    private:
        int inchargeof;
    protected:
        int InChargeOf() const { return inchargeof; }
        int & InChargeOf() { return inchargeof; }
        void Get();
        void Data() const;
    public:
        manager(): abstr_emp(), inchargeof(0) {}
        manager(const string &fn, const string &ln, const string &j, int ico = 0):
            abstr_emp(fn, ln, j), inchargeof(ico) {}
        manager(const abstr_emp &e, int ico = 0):
            abstr_emp(e), inchargeof(ico) {}
        manager(const manager &m): abstr_emp(m), inchargeof(m.InChargeOf()) {}
        virtual void ShowAll() const { abstr_emp::Data(); Data(); }
        virtual void SetAll() { abstr_emp::Get(); Get(); }
};

class fink: virtual public abstr_emp
{
    private:
        string reportsto;
    protected:
        string ReportsTo() const { return reportsto; }
        string & ReportsTo() { return reportsto; }
        void Get();
        void Data() const;
    public:
        fink(): abstr_emp(), reportsto("None") {};
        fink(const string &fn, const string &ln, const string &j, const string &rpo):
            abstr_emp(fn, ln, j), reportsto(rpo) {}
        fink(const abstr_emp &e, const string &rpo): abstr_emp(e), reportsto(rpo) {}
        fink(const fink &e): abstr_emp(e), reportsto(e.ReportsTo()) {}
        virtual void ShowAll() const { abstr_emp::Data(); Data(); };
        virtual void SetAll() { abstr_emp::Get(); Get(); };
};

class highfink: public manager, public fink
{
    protected:
        void Get() { manager::Get(); fink::Get(); }
        void Data() const { manager::Data(); fink::Data(); }
    public:
        highfink(): abstr_emp(), manager(), fink() {};
        highfink(const string &fn, const string &ln, const string &j, const string &rpo, int ico):
            abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}
        highfink(const abstr_emp &e, const string &rpo, int ico):
            abstr_emp(e), manager(e, ico), fink(e, rpo) {}
        highfink(const fink &f, int ico):
            abstr_emp(f), manager(f, ico), fink(f) {}
        highfink(const manager &m, const string &rpo):
            abstr_emp(m), manager(m), fink(m, rpo) {}
        virtual void ShowAll() const { abstr_emp::Data(); Data(); }
        virtual void SetAll() { abstr_emp::Get(); Get(); };
};
