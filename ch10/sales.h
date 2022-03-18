// for ex04
#pragma once
namespace SALES
{
    const int QUARTERS = 4;
    class Sales
    {
        private:
            double m_sales[QUARTERS];
            double m_average;
            double m_max;
            double m_min;
        public:
            Sales() {m_sales[QUARTERS]={}; m_average=m_max=m_min=0;}
            Sales(const double ar[], int n);
            void setSales();
            void showSales() const;
    };
}
