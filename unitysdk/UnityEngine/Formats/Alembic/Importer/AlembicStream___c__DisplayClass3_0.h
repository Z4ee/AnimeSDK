#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicStream; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1879B8F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM___C__DISPLAYCLASS3_0__REMAPSTREAMSWITHPATH_B__0_OFFSET UNITYSDK_OFFSET(0x1879EF50)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicStream___c__DisplayClass3_0_TypeDefinitionIndex = 35032;

	class AlembicStream___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* newPath; // 0x10
		::System::String* oldPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RemapStreamsWithPath_b__0(::UnityEngine::Formats::Alembic::Importer::AlembicStream* s)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicStream*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM___C__DISPLAYCLASS3_0__REMAPSTREAMSWITHPATH_B__0_OFFSET))(this, s);
		}
	};
}
