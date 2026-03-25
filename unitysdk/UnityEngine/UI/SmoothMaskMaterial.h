#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/SmoothMaskMaterial_Params.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class SmoothMaskMaterial_MatEntry; }

#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_ADDMASKOVERRIDESMOOTHMASK_OFFSET UNITYSDK_OFFSET(0x18B6E360)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_ADD_OFFSET UNITYSDK_OFFSET(0x18B6DE80)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_CLEARALL_OFFSET UNITYSDK_OFFSET(0x18B6EE00)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_REMOVEMASKOVERRIDESMOOTHMASK_OFFSET UNITYSDK_OFFSET(0x18B6E470)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_REMOVE_OFFSET UNITYSDK_OFFSET(0x18B6ECB0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETALLPARAMS_OFFSET UNITYSDK_OFFSET(0x18B6DD90)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETMATENTRYPARAMS_OFFSET UNITYSDK_OFFSET(0x18B6E250)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x18B6E540)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B6EEF0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMaskMaterial_TypeDefinitionIndex = 5722;

	class SmoothMaskMaterial : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::SmoothMaskMaterial_MatEntry*>** StaticGet_m_List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::SmoothMaskMaterial_MatEntry*>**)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x65F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_TypeKeywords()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x65F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, ::UnityEngine::UI::SmoothMask* mask)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_ADD_OFFSET))(baseMat, mask);
		}

		static ::System::Void AddMaskOverrideSmoothMask(::UnityEngine::Material* smoothMaskMat, ::UnityEngine::Material* maskMat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_ADDMASKOVERRIDESMOOTHMASK_OFFSET))(smoothMaskMat, maskMat);
		}

		static ::System::Void RemoveMaskOverrideSmoothMask(::UnityEngine::Material* smoothMaskMat, ::UnityEngine::Material* maskMat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_REMOVEMASKOVERRIDESMOOTHMASK_OFFSET))(smoothMaskMat, maskMat);
		}

		static ::System::Void SetAllParams(::UnityEngine::UI::SmoothMask* mask)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETALLPARAMS_OFFSET))(mask);
		}

		static ::System::Void SetParams(::UnityEngine::Material* material, ::UnityEngine::UI::SmoothMaskMaterial_Params& parameters, ::System::Boolean forceSet)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::UI::SmoothMaskMaterial_Params&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETPARAMS_OFFSET))(material, parameters, forceSet);
		}

		static ::System::Void SetMatEntryParams(::UnityEngine::UI::SmoothMaskMaterial_MatEntry* ent, ::UnityEngine::UI::SmoothMaskMaterial_Params& parameters, ::System::Boolean forceSet)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SmoothMaskMaterial_MatEntry*, ::UnityEngine::UI::SmoothMaskMaterial_Params&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETMATENTRYPARAMS_OFFSET))(ent, parameters, forceSet);
		}

		static ::System::Void Remove(::UnityEngine::Material* customMat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_REMOVE_OFFSET))(customMat);
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_CLEARALL_OFFSET))();
		}
	};
}
