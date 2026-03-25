#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_UVUNWRAPPING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B31F0)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188B3230)
#define UNITYENGINE_PROBUILDER_UVUNWRAPPING___C__SETAUTOUV_B__0_0_OFFSET UNITYSDK_OFFSET(0x188B3240)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int UvUnwrapping___c_TypeDefinitionIndex = 34184;

	class UvUnwrapping___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UvUnwrapping___c_TypeDefinitionIndex)->GetStaticField(0x2A880);
		}
		static ::UnityEngine::ProBuilder::UvUnwrapping___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::UvUnwrapping___c**)Il2CppClass::FromTypeDefinitionIndex(UvUnwrapping___c_TypeDefinitionIndex)->GetStaticField(0x2A888);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetAutoUV_b__0_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING___C__SETAUTOUV_B__0_0_OFFSET))(this, x);
		}
	};
}
