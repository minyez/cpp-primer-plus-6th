/*
 * Date  : 2022-03-24 20:04:18
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include "dma.h"

const int NDMAS = 3;

int main(int argc, char** argv)
{
    using namespace std;
    abcDMA *dmas[NDMAS];
    char kind;
    char templabel[80];
    char tempcs[80]; // temporary color/style
    int temprt;
    
    for (int i = 0; i < NDMAS; i++)
    {
        cout << "Enter DMA label: ";
        cin.getline(templabel, 80);
        cout << "Enter DMA rating: ";
        cin >> temprt;
        while (cin.get() != '\n') continue; // prune left numebrs
        
        while (cout << "Enter DMA type (a) baseDMA (b) lacksDMA (c) hasDMA: " && 
               cin >> kind && (kind != 'a' && kind != 'b' && kind != 'c'))
            continue;
        while (cin.get() != '\n') continue; // prune left numebrs
        switch (kind) {
            case 'a':
                dmas[i] = new baseDMA(templabel, temprt);
                break;
            case 'b':
                cout << "Enter lacksDMA color: ";
                cin.getline(tempcs, 80);
                dmas[i] = new lacksDMA(tempcs, templabel, temprt);
                break;
            case 'c':
                cout << "Enter hasDMA style: ";
                cin.getline(tempcs, 80);
                dmas[i] = new hasDMA(tempcs, templabel, temprt);
                break;
        }
    } /* end for (int i = 0; i < NDMAS; i++) */

    for (int i = 0; i < NDMAS; i++)
    {
        dmas[i]->View();
        delete dmas[i];
    }
    return 0;
}
