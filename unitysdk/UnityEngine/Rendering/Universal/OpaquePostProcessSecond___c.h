#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ABAFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABAFE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND___C__EXECUTE_B__10_0_OFFSET UNITYSDK_OFFSET(0x19ABAFF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OpaquePostProcessSecond___c_TypeDefinitionIndex = 30208;

	class OpaquePostProcessSecond___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::OpaquePostProcessSecond___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::OpaquePostProcessSecond___c**)Il2CppClass::FromTypeDefinitionIndex(OpaquePostProcessSecond___c_TypeDefinitionIndex)->GetStaticField(0x23D30);
		}
		static ::System::Func_2<::UnityEngine::Vector4, ::System::Single>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::UnityEngine::Vector4, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(OpaquePostProcessSecond___c_TypeDefinitionIndex)->GetStaticField(0x23D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND___C__CTOR_OFFSET))(this);
		}

		::System::Single _Execute_b__10_0(::UnityEngine::Vector4 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND___C__EXECUTE_B__10_0_OFFSET))(this, v);
		}
	};
}
