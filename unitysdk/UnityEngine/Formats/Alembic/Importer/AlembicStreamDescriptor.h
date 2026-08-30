#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicStreamSettings; }
namespace UnityEngine::Formats::Alembic::Importer { class IStreamDescriptor; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_CLONE_OFFSET UNITYSDK_OFFSET(0x1CE3C9A0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_GET_MEDIADURATION_OFFSET UNITYSDK_OFFSET(0x1CE3C990)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_GET_MEDIAENDTIME_OFFSET UNITYSDK_OFFSET(0x1CE3C970)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_GET_MEDIASTARTTIME_OFFSET UNITYSDK_OFFSET(0x1CE3C950)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_GET_PATHTOABC_OFFSET UNITYSDK_OFFSET(0x1CE3C900)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1CE3C930)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_SET_MEDIAENDTIME_OFFSET UNITYSDK_OFFSET(0x1CE3C980)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_SET_MEDIASTARTTIME_OFFSET UNITYSDK_OFFSET(0x1CE3C960)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_SET_PATHTOABC_OFFSET UNITYSDK_OFFSET(0x1CE3C920)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1CE3C940)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3C9E0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicStreamDescriptor_TypeDefinitionIndex = 44730;

	class AlembicStreamDescriptor : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* pathToAbc; // 0x18
		::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings* settings; // 0x20
		::System::Single abcStartTime; // 0x28
		::System::Single abcEndTime; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR__CTOR_OFFSET))(this);
		}

		::System::String* get_PathToAbc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_GET_PATHTOABC_OFFSET))(this);
		}

		::System::Void set_PathToAbc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_SET_PATHTOABC_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings* get_Settings()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void set_Settings(::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_SET_SETTINGS_OFFSET))(this, a1);
		}

		::System::Single get_MediaStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_GET_MEDIASTARTTIME_OFFSET))(this);
		}

		::System::Void set_MediaStartTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_SET_MEDIASTARTTIME_OFFSET))(this, a1);
		}

		::System::Single get_MediaEndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_GET_MEDIAENDTIME_OFFSET))(this);
		}

		::System::Void set_MediaEndTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_SET_MEDIAENDTIME_OFFSET))(this, a1);
		}

		::System::Single get_MediaDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_GET_MEDIADURATION_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor* Clone()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMDESCRIPTOR_CLONE_OFFSET))(this);
		}
	};
}
