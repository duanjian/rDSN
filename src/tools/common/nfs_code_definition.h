# pragma once
# include <dsn/service_api.h>
# include "nfs_types.h"


# define __TITLE__ "nfs"

namespace dsn { namespace service { 
    // define RPC task code for service 'nfs'
    DEFINE_TASK_CODE_RPC(RPC_NFS_COPY, ::dsn::TASK_PRIORITY_COMMON, ::dsn::THREAD_POOL_DEFAULT)
    DEFINE_TASK_CODE_RPC(RPC_NFS_GET_FILE_SIZE, ::dsn::TASK_PRIORITY_COMMON, ::dsn::THREAD_POOL_DEFAULT)
    // test timer task code
    DEFINE_TASK_CODE(LPC_NFS_REQUEST_TIMER, ::dsn::TASK_PRIORITY_COMMON, ::dsn::THREAD_POOL_DEFAULT)

    DEFINE_TASK_CODE_AIO(LPC_NFS_READ, ::dsn::TASK_PRIORITY_COMMON, THREAD_POOL_DEFAULT)
    DEFINE_TASK_CODE(LPC_NFS_FILE_CLOSE_TIMER, ::dsn::TASK_PRIORITY_COMMON, THREAD_POOL_DEFAULT)

    DEFINE_TASK_CODE_AIO(LPC_NFS_WRITE, ::dsn::TASK_PRIORITY_COMMON, THREAD_POOL_DEFAULT)

    DEFINE_TASK_CODE_AIO(LPC_NFS_COPY_FILE, ::dsn::TASK_PRIORITY_COMMON, THREAD_POOL_DEFAULT)
} } 
