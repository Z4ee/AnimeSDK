#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/SmoothMaskMaterial_Params.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class SmoothMaskMaterial_MatEntry; }

#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_ADD_OFFSET UNITYSDK_OFFSET(0x1F3288F0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_REMOVE_OFFSET UNITYSDK_OFFSET(0x1F3296B0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETALLPARAMS_OFFSET UNITYSDK_OFFSET(0x1F329450)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x1F328E90)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F329960)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMaskMaterial_TypeDefinitionIndex = 19309;

	class SmoothMaskMaterial : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::SmoothMaskMaterial_MatEntry*>** StaticGet_m_List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::SmoothMaskMaterial_MatEntry*>**)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x8850);
		}
		static ::System::Int32* StaticGet__SmoothMaskSoftRanges()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x4390);
		}
		static ::System::Int32* StaticGet__SmoothMaskFillParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x4394);
		}
		static ::System::Int32* StaticGet__SmoothMaskTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x4398);
		}
		static ::System::Int32* StaticGet__SmoothMaskTransformD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x439C);
		}
		static ::System::Int32* StaticGet__SmoothMaskTransformB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x43A0);
		}
		static ::System::Int32* StaticGet__SmoothMaskType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x43A4);
		}
		static ::System::Int32* StaticGet__SmoothMaskInvert()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x43A8);
		}
		static ::System::Int32* StaticGet__SmoothMaskTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x43AC);
		}
		static ::System::Int32* StaticGet__SmoothMaskTransformC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x43B0);
		}
		static ::System::Int32* StaticGet__SmoothMaskTransformA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x43B4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, ::UnityEngine::UI::SmoothMask* mask)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_ADD_OFFSET))(baseMat, mask);
		}

		static ::System::Void SetAllParams(::UnityEngine::UI::SmoothMask* mask)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETALLPARAMS_OFFSET))(mask);
		}

		static ::System::Void SetParams(::UnityEngine::Material* material, ::UnityEngine::UI::SmoothMaskMaterial_Params& parameters, ::System::Boolean forceSet)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::UI::SmoothMaskMaterial_Params&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETPARAMS_OFFSET))(material, parameters, forceSet);
		}

		static ::System::Void Remove(::UnityEngine::Material* customMat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_REMOVE_OFFSET))(customMat);
		}
	};
}
