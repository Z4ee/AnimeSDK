#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1E40A0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E40E0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__GETTARGETS_B__35_0_OFFSET UNITYSDK_OFFSET(0x1A1E40F0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder___c_TypeDefinitionIndex = 40770;

	class AlembicRecorder___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Formats::Alembic::Util::AlembicRecorder___c** StaticGet___9()
		{
			return (::UnityEngine::Formats::Alembic::Util::AlembicRecorder___c**)Il2CppClass::FromTypeDefinitionIndex(AlembicRecorder___c_TypeDefinitionIndex)->GetStaticField(0x448A0);
		}
		static ::System::Converter_2<::UnityEngine::Object*, ::UnityEngine::Component*>** StaticGet___9__35_0()
		{
			return (::System::Converter_2<::UnityEngine::Object*, ::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(AlembicRecorder___c_TypeDefinitionIndex)->GetStaticField(0x448A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Component* _GetTargets_b__35_0(::UnityEngine::Object* e)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER___C__GETTARGETS_B__35_0_OFFSET))(this, e);
		}
	};
}
