#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LightDataGI.h"

namespace UnityEngine { class Light; }

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF56C30)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF56C70)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1DF56C80)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int Lightmapping___c_TypeDefinitionIndex = 6321;

	class Lightmapping___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c** StaticGet___9()
		{
			return (::UnityEngine::Experimental::GlobalIllumination::Lightmapping___c**)Il2CppClass::FromTypeDefinitionIndex(Lightmapping___c_TypeDefinitionIndex)->GetStaticField(0x5340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__7_0(::Il2CppArray<::UnityEngine::Light*>* requests, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Light*>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPING___C___CCTOR_B__7_0_OFFSET))(this, requests, lightsOutput);
		}
	};
}
