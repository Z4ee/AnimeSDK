#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicStream; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B190520)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM___C__DISPLAYCLASS4_0__RECONNECTSTREAMSWITHPATH_B__0_OFFSET UNITYSDK_OFFSET(0x1B1945B0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicStream___c__DisplayClass4_0_TypeDefinitionIndex = 42547;

	class AlembicStream___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::String* path; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReconnectStreamsWithPath_b__0(::UnityEngine::Formats::Alembic::Importer::AlembicStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicStream*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM___C__DISPLAYCLASS4_0__RECONNECTSTREAMSWITHPATH_B__0_OFFSET))(this, a1);
		}
	};
}
