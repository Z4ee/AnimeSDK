#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE475B0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE475F0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__GETTARGETS_B__35_0_OFFSET UNITYSDK_OFFSET(0x1CE47600)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder___c_TypeDefinitionIndex = 44638;

	class AlembicRecorder___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::Object*, ::UnityEngine::Component*>** StaticGet___9__35_0()
		{
			return (::System::Converter_2<::UnityEngine::Object*, ::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(AlembicRecorder___c_TypeDefinitionIndex)->GetStaticField(0x1EA10);
		}
		static ::UnityEngine::Formats::Alembic::Util::AlembicRecorder___c** StaticGet___9()
		{
			return (::UnityEngine::Formats::Alembic::Util::AlembicRecorder___c**)Il2CppClass::FromTypeDefinitionIndex(AlembicRecorder___c_TypeDefinitionIndex)->GetStaticField(0x1EA18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Component* _GetTargets_b__35_0(::UnityEngine::Object* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__GETTARGETS_B__35_0_OFFSET))(this, a1);
		}
	};
}
