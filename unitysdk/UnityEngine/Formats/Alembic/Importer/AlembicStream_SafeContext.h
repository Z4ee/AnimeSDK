#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiContext.h"

namespace System { class String; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_DESTROY_OFFSET UNITYSDK_OFFSET(0x2104580)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GETAPPLICATION_OFFSET UNITYSDK_OFFSET(0x21042D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GETTIMERANGE_OFFSET UNITYSDK_OFFSET(0x2104380)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GETTIMESAMPLING_OFFSET UNITYSDK_OFFSET(0x21041C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x309F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x21040C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GET_TIMESAMPLINGCOUNT_OFFSET UNITYSDK_OFFSET(0x2104140)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GET_UPDATEJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x163A6E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_ISHDF5_OFFSET UNITYSDK_OFFSET(0x2104250)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_LOAD_OFFSET UNITYSDK_OFFSET(0x21044B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_SCHEDULEUPDATESAMPLES_OFFSET UNITYSDK_OFFSET(0x2104620)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x2104410)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_SET_UPDATEJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x20DFB70)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x21040B0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicStream_SafeContext_TypeDefinitionIndex = 35028;

	struct alignas(8) AlembicStream_SafeContext
	{
		::UnityEngine::Formats::Alembic::Sdk::aiContext context; // 0x10
		::Unity::Jobs::JobHandle _updateJobHandle_k__BackingField; // 0x18

		::System::Void _ctor(::UnityEngine::Formats::Alembic::Sdk::aiContext c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiContext))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT__CTOR_OFFSET))(this, c);
		}

		::Unity::Jobs::JobHandle get_updateJobHandle()
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GET_UPDATEJOBHANDLE_OFFSET))(this);
		}

		::System::Void set_updateJobHandle(::Unity::Jobs::JobHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_SET_UPDATEJOBHANDLE_OFFSET))(this, value);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GET_ISVALID_OFFSET))(this);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiObject get_root()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GET_ROOT_OFFSET))(this);
		}
		*/

		::System::Int32 get_timeSamplingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GET_TIMESAMPLINGCOUNT_OFFSET))(this);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiTimeSampling GetTimeSampling(::System::Int32 i)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiTimeSampling(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GETTIMESAMPLING_OFFSET))(this, i);
		}
		*/

		::System::Boolean IsHDF5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_ISHDF5_OFFSET))(this);
		}

		::System::String* GetApplication()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GETAPPLICATION_OFFSET))(this);
		}

		::System::Void GetTimeRange(::System::Double& begin, ::System::Double& end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_GETTIMERANGE_OFFSET))(this, begin, end);
		}

		/*
		::System::Void SetConfig(::UnityEngine::Formats::Alembic::Sdk::aiConfig& conf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_SETCONFIG_OFFSET))(this, conf);
		}
		*/

		::System::Boolean Load(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_LOAD_OFFSET))(this, path);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_DESTROY_OFFSET))(this);
		}

		::System::Void ScheduleUpdateSamples(::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_SCHEDULEUPDATESAMPLES_OFFSET))(this, time);
		}
	};
}
