//
// Created by ruanying on 19-1-1.
//

#ifndef MYCPPNOTE_TABTENN0_H
#define MYCPPNOTE_TABTENN0_H

#include <string>
using namespace std;

// simple base class
class TableTennisPlayer{
private:
    string firstname;
    string lastname;
    bool hasTable;

public:
    TableTennisPlayer(const string & fn = "none",
                      const string & ln = "none",
                      bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; }
    void ResetTable(bool v) { hasTable = v; }
};



class RatedPlayer:public TableTennisPlayer{
private:
    unsigned int rating; //add a data member

public:
    RatedPlayer(unsigned int r = 0,
                const string & fn = "none",
                const string & ln = "none",
                bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating() const { return rating; } //add a method
    void ResetRating(unsigned int r) { rating = r; }
};

#endif //MYCPPNOTE_TABTENN0_H
