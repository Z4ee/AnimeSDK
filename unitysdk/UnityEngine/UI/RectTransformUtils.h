#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_RECTTRANSFORMUTILS_SETANCHOR_OFFSET UNITYSDK_OFFSET(0x1773ADB0)
#define UNITYENGINE_UI_RECTTRANSFORMUTILS_SETPIVOT_OFFSET UNITYSDK_OFFSET(0x1773AC00)
#define UNITYENGINE_UI_RECTTRANSFORMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1773B3A0)
#define UNITYENGINE_UI_RECTTRANSFORMUTILS__SETANCHOR_G__SETANCHORIMPL_0_0_OFFSET UNITYSDK_OFFSET(0x1773AE00)
#define UNITYENGINE_UI_RECTTRANSFORMUTILS__SETPIVOT_G__GETRECTREFERENCECORNER_1_0_OFFSET UNITYSDK_OFFSET(0x1773B210)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RectTransformUtils_TypeDefinitionIndex = 6801;

	class RectTransformUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(RectTransformUtils_TypeDefinitionIndex)->GetStaticField(0x28E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void SetAnchor(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMUTILS_SETANCHOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetPivot(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMUTILS_SETPIVOT_OFFSET))(a1, a2);
		}

		static ::System::Void _SetAnchor_g__SetAnchorImpl_0_0(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMUTILS__SETANCHOR_G__SETANCHORIMPL_0_0_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 _SetPivot_g__GetRectReferenceCorner_1_0(::UnityEngine::RectTransform* a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMUTILS__SETPIVOT_G__GETRECTREFERENCECORNER_1_0_OFFSET))(a1);
		}
	};
}
