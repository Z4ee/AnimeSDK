#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::Rendering::Universal { class ZzzFluid; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER_GETALLFLUIDPROXY_OFFSET UNITYSDK_OFFSET(0x1C413C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER_GETVALIDFLUIDPROXYCOUNT_OFFSET UNITYSDK_OFFSET(0x1C4139E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C4132E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER_REGISTERFLUID_OFFSET UNITYSDK_OFFSET(0x1C4135A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER_UNREGISTERFLUID_OFFSET UNITYSDK_OFFSET(0x1C413860)
#define UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C413380)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FluidManager_TypeDefinitionIndex = 27420;

	class FluidManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::FluidManager** StaticGet_s_Instance()
		{
			return (::UnityEngine::Rendering::Universal::FluidManager**)Il2CppClass::FromTypeDefinitionIndex(FluidManager_TypeDefinitionIndex)->GetStaticField(0x23BA0);
		}
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ZzzFluid*>* m_FluidProxy; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* fluidIdPool; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::ZzzFluid*, ::System::Int32>* m_FluidToIndex; // 0x20
		::System::Boolean RenderInEditMode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Universal::FluidManager* get_Instance()
		{
			return ((::UnityEngine::Rendering::Universal::FluidManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Int32 RegisterFluid(::UnityEngine::Rendering::Universal::ZzzFluid* fluid)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::ZzzFluid*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER_REGISTERFLUID_OFFSET))(this, fluid);
		}

		::System::Void UnregisterFluid(::UnityEngine::Rendering::Universal::ZzzFluid* fluid)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ZzzFluid*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER_UNREGISTERFLUID_OFFSET))(this, fluid);
		}

		::System::Int32 GetValidFluidProxyCount(::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER_GETVALIDFLUIDPROXYCOUNT_OFFSET))(this, layerMask);
		}

		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ZzzFluid*>* GetAllFluidProxy()
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ZzzFluid*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FLUIDMANAGER_GETALLFLUIDPROXY_OFFSET))(this);
		}
	};
}
