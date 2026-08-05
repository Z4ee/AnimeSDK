#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SQLite3_ColType.h"
#include "unitysdk/UnityEngine/SQLite3_ExtendedResult.h"
#include "unitysdk/UnityEngine/SQLite3_Result.h"

namespace System { class String; }

#define UNITYENGINE_SQLITE3_BACKUPFINISH_OFFSET UNITYSDK_OFFSET(0x1E8B33B0)
#define UNITYENGINE_SQLITE3_BACKUPINIT_OFFSET UNITYSDK_OFFSET(0x1E8B3390)
#define UNITYENGINE_SQLITE3_BACKUPSTEP_OFFSET UNITYSDK_OFFSET(0x1E8B33A0)
#define UNITYENGINE_SQLITE3_BINDBLOB_OFFSET UNITYSDK_OFFSET(0x1E8B30D0)
#define UNITYENGINE_SQLITE3_BINDDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E8B30B0)
#define UNITYENGINE_SQLITE3_BINDINT64_OFFSET UNITYSDK_OFFSET(0x1E8B30A0)
#define UNITYENGINE_SQLITE3_BINDINT_OFFSET UNITYSDK_OFFSET(0x1E8B3090)
#define UNITYENGINE_SQLITE3_BINDNULL_OFFSET UNITYSDK_OFFSET(0x1E8B3080)
#define UNITYENGINE_SQLITE3_BINDPARAMETERINDEX_OFFSET UNITYSDK_OFFSET(0x1E8B3070)
#define UNITYENGINE_SQLITE3_BINDTEXT_OFFSET UNITYSDK_OFFSET(0x1E8B30C0)
#define UNITYENGINE_SQLITE3_BUSYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E8B2F10)
#define UNITYENGINE_SQLITE3_CHANGES_OFFSET UNITYSDK_OFFSET(0x1E8B2F20)
#define UNITYENGINE_SQLITE3_CLOSE2_OFFSET UNITYSDK_OFFSET(0x1E8B2F00)
#define UNITYENGINE_SQLITE3_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E8B2EF0)
#define UNITYENGINE_SQLITE3_COLUMNBLOB_OFFSET UNITYSDK_OFFSET(0x1E8B3200)
#define UNITYENGINE_SQLITE3_COLUMNBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1E8B32D0)
#define UNITYENGINE_SQLITE3_COLUMNBYTES_OFFSET UNITYSDK_OFFSET(0x1E8B3210)
#define UNITYENGINE_SQLITE3_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x1E8B30E0)
#define UNITYENGINE_SQLITE3_COLUMNDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E8B31E0)
#define UNITYENGINE_SQLITE3_COLUMNINT64_OFFSET UNITYSDK_OFFSET(0x1E8B31D0)
#define UNITYENGINE_SQLITE3_COLUMNINT_OFFSET UNITYSDK_OFFSET(0x1E8B31C0)
#define UNITYENGINE_SQLITE3_COLUMNNAME16INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E8B30F0)
#define UNITYENGINE_SQLITE3_COLUMNNAME16_OFFSET UNITYSDK_OFFSET(0x1E8B3100)
#define UNITYENGINE_SQLITE3_COLUMNSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B3220)
#define UNITYENGINE_SQLITE3_COLUMNTEXT16_OFFSET UNITYSDK_OFFSET(0x1E8B31F0)
#define UNITYENGINE_SQLITE3_COLUMNTYPE_OFFSET UNITYSDK_OFFSET(0x1E8B31B0)
#define UNITYENGINE_SQLITE3_ENABLELOADEXTENSION_OFFSET UNITYSDK_OFFSET(0x1E8B2EE0)
#define UNITYENGINE_SQLITE3_ERRMSG_OFFSET UNITYSDK_OFFSET(0x1E8B2FB0)
#define UNITYENGINE_SQLITE3_EXTENDEDERRCODE_OFFSET UNITYSDK_OFFSET(0x1E8B3370)
#define UNITYENGINE_SQLITE3_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E8B2F90)
#define UNITYENGINE_SQLITE3_GETERRMSG_OFFSET UNITYSDK_OFFSET(0x1E8B2FC0)
#define UNITYENGINE_SQLITE3_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1E8B3360)
#define UNITYENGINE_SQLITE3_LASTINSERTROWID_OFFSET UNITYSDK_OFFSET(0x1E8B2FA0)
#define UNITYENGINE_SQLITE3_LIBVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1E8B3380)
#define UNITYENGINE_SQLITE3_OPEN_1_OFFSET UNITYSDK_OFFSET(0x1E8B2E60)
#define UNITYENGINE_SQLITE3_OPEN_2_OFFSET UNITYSDK_OFFSET(0x1E8B2EA0)
#define UNITYENGINE_SQLITE3_OPEN_OFFSET UNITYSDK_OFFSET(0x1E8B2E50)
#define UNITYENGINE_SQLITE3_OPEN_V2_OFFSET UNITYSDK_OFFSET(0x1E8B2E90)
#define UNITYENGINE_SQLITE3_PREPARE2_OFFSET UNITYSDK_OFFSET(0x1E8B2F40)
#define UNITYENGINE_SQLITE3_PREPARE_V2_OFFSET UNITYSDK_OFFSET(0x1E8B2F30)
#define UNITYENGINE_SQLITE3_RESET_OFFSET UNITYSDK_OFFSET(0x1E8B2F80)
#define UNITYENGINE_SQLITE3_STEP_OFFSET UNITYSDK_OFFSET(0x1E8B2F70)
#define UNITYENGINE_SQLITE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B33C0)

namespace UnityEngine
{
	inline static constexpr unsigned int SQLite3_TypeDefinitionIndex = 5394;

	class SQLite3 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr Open(::System::String* filename, ::UnityEngine::SQLite3_Result& result)
		{
			return ((::System::IntPtr(*)(::System::String*, ::UnityEngine::SQLite3_Result&))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_OPEN_OFFSET))(filename, result);
		}

		static ::UnityEngine::SQLite3_Result Open_1(::System::String* filename, ::System::IntPtr& db)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::String*, ::System::IntPtr&))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_OPEN_1_OFFSET))(filename, db);
		}

		static ::System::IntPtr Open_v2(::System::String* filename, ::System::Int32 flags, ::System::String* zvfs, ::UnityEngine::SQLite3_Result& result)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::Int32, ::System::String*, ::UnityEngine::SQLite3_Result&))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_OPEN_V2_OFFSET))(filename, flags, zvfs, result);
		}

		static ::UnityEngine::SQLite3_Result Open_2(::System::String* filename, ::System::IntPtr& db, ::System::Int32 flags, ::System::String* zvfs)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::String*, ::System::IntPtr&, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_OPEN_2_OFFSET))(filename, db, flags, zvfs);
		}

		static ::UnityEngine::SQLite3_Result EnableLoadExtension(::System::IntPtr db, ::System::Int32 onOff)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_ENABLELOADEXTENSION_OFFSET))(db, onOff);
		}

		static ::UnityEngine::SQLite3_Result Close(::System::IntPtr db)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_CLOSE_OFFSET))(db);
		}

		static ::UnityEngine::SQLite3_Result Close2(::System::IntPtr db)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_CLOSE2_OFFSET))(db);
		}

		static ::UnityEngine::SQLite3_Result BusyTimeout(::System::IntPtr db, ::System::Int32 milliseconds)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BUSYTIMEOUT_OFFSET))(db, milliseconds);
		}

		static ::System::Int32 Changes(::System::IntPtr db)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_CHANGES_OFFSET))(db);
		}

		static ::System::IntPtr Prepare_v2(::System::IntPtr db, ::System::String* sql, ::UnityEngine::SQLite3_Result& result)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::UnityEngine::SQLite3_Result&))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_PREPARE_V2_OFFSET))(db, sql, result);
		}

		static ::UnityEngine::SQLite3_Result Prepare2(::System::IntPtr db, ::System::String* sql, ::System::IntPtr& stmt)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr, ::System::String*, ::System::IntPtr&))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_PREPARE2_OFFSET))(db, sql, stmt);
		}

		static ::UnityEngine::SQLite3_Result Step(::System::IntPtr stmt)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_STEP_OFFSET))(stmt);
		}

		static ::UnityEngine::SQLite3_Result Reset(::System::IntPtr stmt)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_RESET_OFFSET))(stmt);
		}

		static ::UnityEngine::SQLite3_Result Finalize(::System::IntPtr stmt)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_FINALIZE_OFFSET))(stmt);
		}

		static ::System::Int64 LastInsertRowid(::System::IntPtr db)
		{
			return ((::System::Int64(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_LASTINSERTROWID_OFFSET))(db);
		}

		static ::System::IntPtr Errmsg(::System::IntPtr db)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_ERRMSG_OFFSET))(db);
		}

		static ::System::String* GetErrmsg(::System::IntPtr db)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_GETERRMSG_OFFSET))(db);
		}

		static ::System::Int32 BindParameterIndex(::System::IntPtr stmt, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BINDPARAMETERINDEX_OFFSET))(stmt, name);
		}

		static ::System::Int32 BindNull(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BINDNULL_OFFSET))(stmt, index);
		}

		static ::System::Int32 BindInt(::System::IntPtr stmt, ::System::Int32 index, ::System::Int32 val)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BINDINT_OFFSET))(stmt, index, val);
		}

		static ::System::Int32 BindInt64(::System::IntPtr stmt, ::System::Int32 index, ::System::Int64 val)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BINDINT64_OFFSET))(stmt, index, val);
		}

		static ::System::Int32 BindDouble(::System::IntPtr stmt, ::System::Int32 index, ::System::Double val)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BINDDOUBLE_OFFSET))(stmt, index, val);
		}

		static ::System::Int32 BindText(::System::IntPtr stmt, ::System::Int32 index, ::System::String* val, ::System::Int32 n, ::System::IntPtr free)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::String*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BINDTEXT_OFFSET))(stmt, index, val, n, free);
		}

		static ::System::Int32 BindBlob(::System::IntPtr stmt, ::System::Int32 index, ::Il2CppArray<::System::Byte>* val, ::System::Int32 n, ::System::IntPtr free)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BINDBLOB_OFFSET))(stmt, index, val, n, free);
		}

		static ::System::Int32 ColumnCount(::System::IntPtr stmt)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNCOUNT_OFFSET))(stmt);
		}

		static ::System::IntPtr ColumnName16Internal(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNNAME16INTERNAL_OFFSET))(stmt, index);
		}

		static ::System::String* ColumnName16(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNNAME16_OFFSET))(stmt, index);
		}

		static ::UnityEngine::SQLite3_ColType ColumnType(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::UnityEngine::SQLite3_ColType(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNTYPE_OFFSET))(stmt, index);
		}

		static ::System::Int32 ColumnInt(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNINT_OFFSET))(stmt, index);
		}

		static ::System::Int64 ColumnInt64(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNINT64_OFFSET))(stmt, index);
		}

		static ::System::Double ColumnDouble(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNDOUBLE_OFFSET))(stmt, index);
		}

		static ::System::IntPtr ColumnText16(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNTEXT16_OFFSET))(stmt, index);
		}

		static ::System::IntPtr ColumnBlob(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNBLOB_OFFSET))(stmt, index);
		}

		static ::System::Int32 ColumnBytes(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNBYTES_OFFSET))(stmt, index);
		}

		static ::System::String* ColumnString(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNSTRING_OFFSET))(stmt, index);
		}

		static ::Il2CppArray<::System::Byte>* ColumnByteArray(::System::IntPtr stmt, ::System::Int32 index)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_COLUMNBYTEARRAY_OFFSET))(stmt, index);
		}

		static ::UnityEngine::SQLite3_Result GetResult(::System::IntPtr db)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_GETRESULT_OFFSET))(db);
		}

		static ::UnityEngine::SQLite3_ExtendedResult ExtendedErrCode(::System::IntPtr db)
		{
			return ((::UnityEngine::SQLite3_ExtendedResult(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_EXTENDEDERRCODE_OFFSET))(db);
		}

		static ::System::Int32 LibVersionNumber()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_LIBVERSIONNUMBER_OFFSET))();
		}

		static ::System::IntPtr BackupInit(::System::IntPtr destDb, ::System::String* destName, ::System::IntPtr sourceDb, ::System::String* sourceName)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BACKUPINIT_OFFSET))(destDb, destName, sourceDb, sourceName);
		}

		static ::UnityEngine::SQLite3_Result BackupStep(::System::IntPtr backup, ::System::Int32 numPages)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BACKUPSTEP_OFFSET))(backup, numPages);
		}

		static ::UnityEngine::SQLite3_Result BackupFinish(::System::IntPtr backup)
		{
			return ((::UnityEngine::SQLite3_Result(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SQLITE3_BACKUPFINISH_OFFSET))(backup);
		}
	};
}
