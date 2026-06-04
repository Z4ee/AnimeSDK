#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ColorWriteMask.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class StencilMaterial_MatEntry; }

#define UNITYENGINE_UI_STENCILMATERIAL_ADD_1_OFFSET UNITYSDK_OFFSET(0x1B3F6B70)
#define UNITYENGINE_UI_STENCILMATERIAL_ADD_2_OFFSET UNITYSDK_OFFSET(0x1B3F6BE0)
#define UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET UNITYSDK_OFFSET(0x1B3F6B60)
#define UNITYENGINE_UI_STENCILMATERIAL_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1B3F7670)
#define UNITYENGINE_UI_STENCILMATERIAL_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B3F7450)
#define UNITYENGINE_UI_STENCILMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3F7830)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int StencilMaterial_TypeDefinitionIndex = 6017;

	class StencilMaterial : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>** StaticGet_m_List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>**)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x48450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* Add(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Material* Add_1(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Rendering::StencilOp a3, ::UnityEngine::Rendering::CompareFunction a4, ::UnityEngine::Rendering::ColorWriteMask a5)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Material* Add_2(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Rendering::StencilOp a3, ::UnityEngine::Rendering::CompareFunction a4, ::UnityEngine::Rendering::ColorWriteMask a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void Remove(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_REMOVE_OFFSET))(a1);
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_CLEARALL_OFFSET))();
		}
	};
}
