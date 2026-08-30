#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE37900)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE37940)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C__ONDESTROY_B__39_0_OFFSET UNITYSDK_OFFSET(0x1CE37950)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicPointsRenderer___c_TypeDefinitionIndex = 44746;

	class AlembicPointsRenderer___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Formats::Alembic::Importer::AlembicPointsRenderer___c** StaticGet___9()
		{
			return (::UnityEngine::Formats::Alembic::Importer::AlembicPointsRenderer___c**)Il2CppClass::FromTypeDefinitionIndex(AlembicPointsRenderer___c_TypeDefinitionIndex)->GetStaticField(0x1DF20);
		}
		static ::System::Action_1<::UnityEngine::ComputeBuffer*>** StaticGet___9__39_0()
		{
			return (::System::Action_1<::UnityEngine::ComputeBuffer*>**)Il2CppClass::FromTypeDefinitionIndex(AlembicPointsRenderer___c_TypeDefinitionIndex)->GetStaticField(0x1DF28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnDestroy_b__39_0(::UnityEngine::ComputeBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C__ONDESTROY_B__39_0_OFFSET))(this, a1);
		}
	};
}
