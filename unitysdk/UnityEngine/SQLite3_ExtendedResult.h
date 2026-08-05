#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SQLite3_ExtendedResult_TypeDefinitionIndex = 5396;

	enum class SQLite3_ExtendedResult : ::System::Int32
	{
		IOErrorRead = 266,
		IOErrorShortRead = 522,
		IOErrorWrite = 778,
		IOErrorFsync = 1034,
		IOErrorDirFSync = 1290,
		IOErrorTruncate = 1546,
		IOErrorFStat = 1802,
		IOErrorUnlock = 2058,
		IOErrorRdlock = 2314,
		IOErrorDelete = 2570,
		IOErrorBlocked = 2826,
		IOErrorNoMem = 3082,
		IOErrorAccess = 3338,
		IOErrorCheckReservedLock = 3594,
		IOErrorLock = 3850,
		IOErrorClose = 4106,
		IOErrorDirClose = 4362,
		IOErrorSHMOpen = 4618,
		IOErrorSHMSize = 4874,
		IOErrorSHMLock = 5130,
		IOErrorSHMMap = 5386,
		IOErrorSeek = 5642,
		IOErrorDeleteNoEnt = 5898,
		IOErrorMMap = 6154,
		LockedSharedcache = 262,
		BusyRecovery = 261,
		CannottOpenNoTempDir = 270,
		CannotOpenIsDir = 526,
		CannotOpenFullPath = 782,
		CorruptVTab = 267,
		ReadonlyRecovery = 264,
		ReadonlyCannotLock = 520,
		ReadonlyRollback = 776,
		AbortRollback = 516,
		ConstraintCheck = 275,
		ConstraintCommitHook = 531,
		ConstraintForeignKey = 787,
		ConstraintFunction = 1043,
		ConstraintNotNull = 1299,
		ConstraintPrimaryKey = 1555,
		ConstraintTrigger = 1811,
		ConstraintUnique = 2067,
		ConstraintVTab = 2323,
		NoticeRecoverWAL = 283,
		NoticeRecoverRollback = 539,
	};
}
