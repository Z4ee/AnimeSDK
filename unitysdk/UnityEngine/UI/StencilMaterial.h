#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ColorWriteMask.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::UI { class StencilMaterial_MatEntry; }

#define UNITYENGINE_UI_STENCILMATERIAL_ADD_1_OFFSET UNITYSDK_OFFSET(0x1F44CE90)
#define UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET UNITYSDK_OFFSET(0x1F44CDC0)
#define UNITYENGINE_UI_STENCILMATERIAL_REMOVE_OFFSET UNITYSDK_OFFSET(0x1F44D930)
#define UNITYENGINE_UI_STENCILMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F44DC80)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int StencilMaterial_TypeDefinitionIndex = 19314;

	class StencilMaterial : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>** StaticGet_m_List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>**)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x8860);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::Boolean>** StaticGet_chacedSkipCheckResult()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x8868);
		}
		static ::System::Int32* StaticGet__ColorMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x43D0);
		}
		static ::System::Int32* StaticGet__UseUIAlphaClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x43D4);
		}
		static ::System::Int32* StaticGet__Stencil()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x43D8);
		}
		static ::System::Int32* StaticGet__StencilReadMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x43DC);
		}
		static ::System::Int32* StaticGet__StencilWriteMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x43E0);
		}
		static ::System::Int32* StaticGet__StencilOp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x43E4);
		}
		static ::System::Int32* StaticGet__StencilComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StencilMaterial_TypeDefinitionIndex)->GetStaticField(0x43E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, ::System::Int32 stencilID, ::UnityEngine::Rendering::StencilOp operation, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_OFFSET))(baseMat, stencilID, operation, compareFunction, colorWriteMask);
		}

		static ::UnityEngine::Material* Add_1(::UnityEngine::Material* baseMat, ::System::Int32 stencilID, ::UnityEngine::Rendering::StencilOp operation, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask, ::System::Int32 readMask, ::System::Int32 writeMask)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_ADD_1_OFFSET))(baseMat, stencilID, operation, compareFunction, colorWriteMask, readMask, writeMask);
		}

		static ::System::Void Remove(::UnityEngine::Material* customMat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_STENCILMATERIAL_REMOVE_OFFSET))(customMat);
		}
	};
}
