#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FurHelper_ObjectInfos.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196882E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19688320)
#define UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__DRAWFURLAYERS_B__17_0_OFFSET UNITYSDK_OFFSET(0x19688330)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FurHelperManager___c_TypeDefinitionIndex = 30001;

	class FurHelperManager___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::FurHelperManager___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::FurHelperManager___c**)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager___c_TypeDefinitionIndex)->GetStaticField(0x23AA0);
		}
		static ::System::Comparison_1<::FurHelper_ObjectInfos>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::FurHelper_ObjectInfos>**)Il2CppClass::FromTypeDefinitionIndex(FurHelperManager___c_TypeDefinitionIndex)->GetStaticField(0x23AA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _DrawFurLayers_b__17_0(::FurHelper_ObjectInfos a, ::FurHelper_ObjectInfos b)
		{
			return ((::System::Int32(*)(::PVOID, ::FurHelper_ObjectInfos, ::FurHelper_ObjectInfos))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FURHELPERMANAGER___C__DRAWFURLAYERS_B__17_0_OFFSET))(this, a, b);
		}
	};
}
