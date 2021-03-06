#pragma once

using namespace std;
using namespace eosio;

namespace owdin {
    //@abi table filesystem i64
    struct filesystem {
        /*
        * filesystem config data
        */
        account_name account;      // account name
        account_name receiver;     // receive user account name
        string       status;       // apply result status
        string       playbook;     // file system config
        string       memo;         // transaction memo
        time         created;      // create time
        time         updated;      // update time
        uint64_t     create_block; // create block number
        uint64_t     update_block; // update block number

        uint64_t primary_key() const { return account; }

        EOSLIB_SERIALIZE( filesystem, (account)(receiver)(status)(playbook)(memo)(created)(updated)(create_block)(update_block) )
    };

    typedef multi_index<N(filesystem), filesystem> filesystemIndex;
}
