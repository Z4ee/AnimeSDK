#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_RECTTRANSFORMUTILS_SETANCHOR_OFFSET UNITYSDK_OFFSET(0x1A58B4E0)
#define UNITYENGINE_UI_RECTTRANSFORMUTILS_SETPIVOT_OFFSET UNITYSDK_OFFSET(0x1A58B330)
#define UNITYENGINE_UI_RECTTRANSFORMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A58BAB0)
#define UNITYENGINE_UI_RECTTRANSFORMUTILS__SETANCHOR_G__SETANCHORIMPL_0_0_OFFSET UNITYSDK_OFFSET(0x1A58B530)
#define UNITYENGINE_UI_RECTTRANSFORMUTILS__SETPIVOT_G__GETRECTREFERENCECORNER_1_0_OFFSET UNITYSDK_OFFSET(0x1A58B910)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RectTransformUtils_TypeDefinitionIndex = 5689;

	class RectTransformUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(RectTransformUtils_TypeDefinitionIndex)->GetStaticField(0x1A900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void SetAnchor(::UnityEngine::RectTransform* rt, ::UnityEngine::Vector2 anchorMin, ::UnityEngine::Vector2 anchorMax)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMUTILS_SETANCHOR_OFFSET))(rt, anchorMin, anchorMax);
		}

		static ::System::Void SetPivot(::UnityEngine::RectTransform* rt, ::UnityEngine::Vector2 pivot)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMUTILS_SETPIVOT_OFFSET))(rt, pivot);
		}

		static ::System::Void _SetAnchor_g__SetAnchorImpl_0_0(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 value, ::System::Boolean isMax)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMUTILS__SETANCHOR_G__SETANCHORIMPL_0_0_OFFSET))(rect, value, isMax);
		}

		static ::UnityEngine::Vector3 _SetPivot_g__GetRectReferenceCorner_1_0(::UnityEngine::RectTransform* rect)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTTRANSFORMUTILS__SETPIVOT_G__GETRECTREFERENCECORNER_1_0_OFFSET))(rect);
		}
	};
}
