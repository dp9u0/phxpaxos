#pragma once

namespace phxkv
{

    const uint64_t NullVersion = std::numeric_limits<uint64_t>::min();

    enum class PhxKVStatus
    {
        SUCC = 0,
        FAIL = -1,
        KEY_NOTEXIST = 1,
        VERSION_CONFLICT = -11,
        VERSION_NOTEXIST = -12,
        MASTER_REDIRECT = 10,
        NO_MASTER = 101,
    };

    enum KVOperatorType
    {
        KVOperatorType_READ = 1,
        KVOperatorType_WRITE = 2,
        KVOperatorType_DELETE = 3,
    };

} // namespace phxkv
