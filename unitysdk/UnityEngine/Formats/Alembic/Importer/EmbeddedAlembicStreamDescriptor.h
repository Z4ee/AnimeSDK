#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicStreamSettings; }
namespace UnityEngine::Formats::Alembic::Importer { class IStreamDescriptor; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_CLONE_OFFSET UNITYSDK_OFFSET(0x187A2D70)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_GET_MEDIADURATION_OFFSET UNITYSDK_OFFSET(0x187A2D60)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_GET_MEDIAENDTIME_OFFSET UNITYSDK_OFFSET(0x187A2D40)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_GET_MEDIASTARTTIME_OFFSET UNITYSDK_OFFSET(0x187A2D20)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_GET_PATHTOABC_OFFSET UNITYSDK_OFFSET(0x187A2CA0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x187A2D00)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_SET_MEDIAENDTIME_OFFSET UNITYSDK_OFFSET(0x187A2D50)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_SET_MEDIASTARTTIME_OFFSET UNITYSDK_OFFSET(0x187A2D30)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_SET_PATHTOABC_OFFSET UNITYSDK_OFFSET(0x187A2CF0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x187A2D10)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x187A19D0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int EmbeddedAlembicStreamDescriptor_TypeDefinitionIndex = 35051;

	class EmbeddedAlembicStreamDescriptor : public ::System::Object
	{
	public:
		::System::String* pathToAbc; // 0x10
		::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings* settings; // 0x18
		::System::Single mediaStartTime; // 0x20
		::System::Single mediaEndTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR__CTOR_OFFSET))(this);
		}

		::System::String* get_PathToAbc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_GET_PATHTOABC_OFFSET))(this);
		}

		::System::Void set_PathToAbc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_SET_PATHTOABC_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings* get_Settings()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void set_Settings(::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_SET_SETTINGS_OFFSET))(this, value);
		}

		::System::Single get_MediaStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_GET_MEDIASTARTTIME_OFFSET))(this);
		}

		::System::Void set_MediaStartTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_SET_MEDIASTARTTIME_OFFSET))(this, value);
		}

		::System::Single get_MediaEndTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_GET_MEDIAENDTIME_OFFSET))(this);
		}

		::System::Void set_MediaEndTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_SET_MEDIAENDTIME_OFFSET))(this, value);
		}

		::System::Single get_MediaDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_GET_MEDIADURATION_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor* Clone()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::IStreamDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_EMBEDDEDALEMBICSTREAMDESCRIPTOR_CLONE_OFFSET))(this);
		}
	};
}
