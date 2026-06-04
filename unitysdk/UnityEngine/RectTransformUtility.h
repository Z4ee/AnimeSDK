#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RECTTRANSFORMUTILITY_CALCULATERELATIVERECTTRANSFORMBOUNDS_1_OFFSET UNITYSDK_OFFSET(0x1B373680)
#define UNITYENGINE_RECTTRANSFORMUTILITY_CALCULATERELATIVERECTTRANSFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B372DB0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTAXES_OFFSET UNITYSDK_OFFSET(0x1B3739F0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTONAXIS_OFFSET UNITYSDK_OFFSET(0x1B3736E0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_GETTRANSPOSED_OFFSET UNITYSDK_OFFSET(0x1B373BE0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B372420)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_OFFSET UNITYSDK_OFFSET(0x1B3723C0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B372490)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_OFFSET UNITYSDK_OFFSET(0x1B372430)
#define UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3724F0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1B3724A0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_1_OFFSET UNITYSDK_OFFSET(0x1B3725F0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_2_OFFSET UNITYSDK_OFFSET(0x1B3726A0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x1B372510)
#define UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOLOCALPOINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1B372C80)
#define UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0x1B372B60)
#define UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1B372730)
#define UNITYENGINE_RECTTRANSFORMUTILITY_WORLDTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x1B372D40)
#define UNITYENGINE_RECTTRANSFORMUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B373BF0)
#define UNITYENGINE_RECTTRANSFORMUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B372500)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransformUtility_TypeDefinitionIndex = 5341;

	class RectTransformUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(RectTransformUtility_TypeDefinitionIndex)->GetStaticField(0x350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector2 PixelAdjustPoint(::UnityEngine::Vector2 a1, ::UnityEngine::Transform* a2, ::UnityEngine::Canvas* a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Rect PixelAdjustRect(::UnityEngine::RectTransform* a1, ::UnityEngine::Canvas* a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_OFFSET))(a1, a2);
		}

		static ::System::Boolean PointInRectangle(::UnityEngine::Vector2 a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::Camera* a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean RectangleContainsScreenPoint(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_OFFSET))(a1, a2);
		}

		static ::System::Boolean RectangleContainsScreenPoint_1(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean RectangleContainsScreenPoint_2(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Camera* a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ScreenPointToWorldPointInRectangle(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Camera* a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ScreenPointToLocalPointInRectangle(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Camera* a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOLOCALPOINTINRECTANGLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Camera* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Ray(*)(::UnityEngine::Camera*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTORAY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 WorldToScreenPoint(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_WORLDTOSCREENPOINT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Bounds CalculateRelativeRectTransformBounds(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_CALCULATERELATIVERECTTRANSFORMBOUNDS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Bounds CalculateRelativeRectTransformBounds_1(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_CALCULATERELATIVERECTTRANSFORMBOUNDS_1_OFFSET))(a1);
		}

		static ::System::Void FlipLayoutOnAxis(::UnityEngine::RectTransform* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTONAXIS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void FlipLayoutAxes(::UnityEngine::RectTransform* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTAXES_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 GetTransposed(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_GETTRANSPOSED_OFFSET))(a1);
		}

		static ::System::Void PixelAdjustPoint_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Transform* a2, ::UnityEngine::Canvas* a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Transform*, ::UnityEngine::Canvas*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void PixelAdjustRect_Injected(::UnityEngine::RectTransform* a1, ::UnityEngine::Canvas* a2, ::UnityEngine::Rect& a3)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PointInRectangle_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::Camera* a3, ::UnityEngine::Vector4& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
	};
}
