#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/SmoothMaskMaterial_Params.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class SmoothMaskMaterial_MatEntry; }

#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_ADDMASKOVERRIDESMOOTHMASK_OFFSET UNITYSDK_OFFSET(0x1B3F5610)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_ADD_OFFSET UNITYSDK_OFFSET(0x1B3F5120)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1B3F6170)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_REMOVEMASKOVERRIDESMOOTHMASK_OFFSET UNITYSDK_OFFSET(0x1B3F57A0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B3F6010)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETALLPARAMS_OFFSET UNITYSDK_OFFSET(0x1B3F4FF0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETMATENTRYPARAMS_OFFSET UNITYSDK_OFFSET(0x1B3F5510)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x1B3F58A0)
#define UNITYENGINE_UI_SMOOTHMASKMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3F62C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMaskMaterial_TypeDefinitionIndex = 6011;

	class SmoothMaskMaterial : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_TypeKeywords()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x483D0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::SmoothMaskMaterial_MatEntry*>** StaticGet_m_List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::SmoothMaskMaterial_MatEntry*>**)Il2CppClass::FromTypeDefinitionIndex(SmoothMaskMaterial_TypeDefinitionIndex)->GetStaticField(0x483D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* Add(::UnityEngine::Material* a1, ::UnityEngine::UI::SmoothMask* a2)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_ADD_OFFSET))(a1, a2);
		}

		static ::System::Void AddMaskOverrideSmoothMask(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_ADDMASKOVERRIDESMOOTHMASK_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveMaskOverrideSmoothMask(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_REMOVEMASKOVERRIDESMOOTHMASK_OFFSET))(a1, a2);
		}

		static ::System::Void SetAllParams(::UnityEngine::UI::SmoothMask* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETALLPARAMS_OFFSET))(a1);
		}

		static ::System::Void SetParams(::UnityEngine::Material* a1, ::UnityEngine::UI::SmoothMaskMaterial_Params& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::UI::SmoothMaskMaterial_Params&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETPARAMS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetMatEntryParams(::UnityEngine::UI::SmoothMaskMaterial_MatEntry* a1, ::UnityEngine::UI::SmoothMaskMaterial_Params& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SmoothMaskMaterial_MatEntry*, ::UnityEngine::UI::SmoothMaskMaterial_Params&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_SETMATENTRYPARAMS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Remove(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_REMOVE_OFFSET))(a1);
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SMOOTHMASKMATERIAL_CLEARALL_OFFSET))();
		}
	};
}
