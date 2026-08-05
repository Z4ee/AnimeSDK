#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::Rendering::Universal { class DeferredReflectionProbe; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E245C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E245C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM___C__REMOVEPROBE_B__22_0_OFFSET UNITYSDK_OFFSET(0x1E245C90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DeferredReflectionSystem___c_TypeDefinitionIndex = 27124;

	class DeferredReflectionSystem___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Rendering::Universal::DeferredReflectionProbe*>** StaticGet___9__22_0()
		{
			return (::System::Predicate_1<::UnityEngine::Rendering::Universal::DeferredReflectionProbe*>**)Il2CppClass::FromTypeDefinitionIndex(DeferredReflectionSystem___c_TypeDefinitionIndex)->GetStaticField(0x22FC0);
		}
		static ::UnityEngine::Rendering::Universal::DeferredReflectionSystem___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::DeferredReflectionSystem___c**)Il2CppClass::FromTypeDefinitionIndex(DeferredReflectionSystem___c_TypeDefinitionIndex)->GetStaticField(0x22FC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveProbe_b__22_0(::UnityEngine::Rendering::Universal::DeferredReflectionProbe* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::DeferredReflectionProbe*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEFERREDREFLECTIONSYSTEM___C__REMOVEPROBE_B__22_0_OFFSET))(this, r);
		}
	};
}
