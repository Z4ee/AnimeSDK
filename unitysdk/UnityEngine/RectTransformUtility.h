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

#define UNITYENGINE_RECTTRANSFORMUTILITY_CALCULATERELATIVERECTTRANSFORMBOUNDS_1_OFFSET UNITYSDK_OFFSET(0x18AEC8A0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_CALCULATERELATIVERECTTRANSFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0x18AEBFE0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTAXES_OFFSET UNITYSDK_OFFSET(0x18AECC10)
#define UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTONAXIS_OFFSET UNITYSDK_OFFSET(0x18AEC900)
#define UNITYENGINE_RECTTRANSFORMUTILITY_GETTRANSPOSED_OFFSET UNITYSDK_OFFSET(0x18AECE00)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AEB640)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_OFFSET UNITYSDK_OFFSET(0x18AEB5E0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AEB6B0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_OFFSET UNITYSDK_OFFSET(0x18AEB650)
#define UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AEB710)
#define UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0x18AEB6C0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_1_OFFSET UNITYSDK_OFFSET(0x18AEB810)
#define UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_2_OFFSET UNITYSDK_OFFSET(0x18AEB8C0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x18AEB730)
#define UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOLOCALPOINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0x18AEBEB0)
#define UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0x18AEBD90)
#define UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0x18AEB950)
#define UNITYENGINE_RECTTRANSFORMUTILITY_WORLDTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x18AEBF70)
#define UNITYENGINE_RECTTRANSFORMUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AECE10)
#define UNITYENGINE_RECTTRANSFORMUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEB720)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransformUtility_TypeDefinitionIndex = 5254;

	class RectTransformUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(RectTransformUtility_TypeDefinitionIndex)->GetStaticField(0x310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector2 PixelAdjustPoint(::UnityEngine::Vector2 point, ::UnityEngine::Transform* elementTransform, ::UnityEngine::Canvas* canvas)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_OFFSET))(point, elementTransform, canvas);
		}

		static ::UnityEngine::Rect PixelAdjustRect(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Canvas* canvas)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_OFFSET))(rectTransform, canvas);
		}

		static ::System::Boolean PointInRectangle(::UnityEngine::Vector2 screenPoint, ::UnityEngine::RectTransform* rect, ::UnityEngine::Camera* cam, ::UnityEngine::Vector4 offset)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_OFFSET))(screenPoint, rect, cam, offset);
		}

		static ::System::Boolean RectangleContainsScreenPoint(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_OFFSET))(rect, screenPoint);
		}

		static ::System::Boolean RectangleContainsScreenPoint_1(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_1_OFFSET))(rect, screenPoint, cam);
		}

		static ::System::Boolean RectangleContainsScreenPoint_2(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ::UnityEngine::Vector4 offset)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_RECTANGLECONTAINSSCREENPOINT_2_OFFSET))(rect, screenPoint, cam, offset);
		}

		static ::System::Boolean ScreenPointToWorldPointInRectangle(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3& worldPoint)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET))(rect, screenPoint, cam, worldPoint);
		}

		static ::System::Boolean ScreenPointToLocalPointInRectangle(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam, ::UnityEngine::Vector2& localPoint)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTOLOCALPOINTINRECTANGLE_OFFSET))(rect, screenPoint, cam, localPoint);
		}

		static ::UnityEngine::Ray ScreenPointToRay(::UnityEngine::Camera* cam, ::UnityEngine::Vector2 screenPos)
		{
			return ((::UnityEngine::Ray(*)(::UnityEngine::Camera*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_SCREENPOINTTORAY_OFFSET))(cam, screenPos);
		}

		static ::UnityEngine::Vector2 WorldToScreenPoint(::UnityEngine::Camera* cam, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_WORLDTOSCREENPOINT_OFFSET))(cam, worldPoint);
		}

		static ::UnityEngine::Bounds CalculateRelativeRectTransformBounds(::UnityEngine::Transform* root, ::UnityEngine::Transform* child)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_CALCULATERELATIVERECTTRANSFORMBOUNDS_OFFSET))(root, child);
		}

		static ::UnityEngine::Bounds CalculateRelativeRectTransformBounds_1(::UnityEngine::Transform* trans)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_CALCULATERELATIVERECTTRANSFORMBOUNDS_1_OFFSET))(trans);
		}

		static ::System::Void FlipLayoutOnAxis(::UnityEngine::RectTransform* rect, ::System::Int32 axis, ::System::Boolean keepPositioning, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTONAXIS_OFFSET))(rect, axis, keepPositioning, recursive);
		}

		static ::System::Void FlipLayoutAxes(::UnityEngine::RectTransform* rect, ::System::Boolean keepPositioning, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_FLIPLAYOUTAXES_OFFSET))(rect, keepPositioning, recursive);
		}

		static ::UnityEngine::Vector2 GetTransposed(::UnityEngine::Vector2 input)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_GETTRANSPOSED_OFFSET))(input);
		}

		static ::System::Void PixelAdjustPoint_Injected(::UnityEngine::Vector2& point, ::UnityEngine::Transform* elementTransform, ::UnityEngine::Canvas* canvas, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Transform*, ::UnityEngine::Canvas*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTPOINT_INJECTED_OFFSET))(point, elementTransform, canvas, ret);
		}

		static ::System::Void PixelAdjustRect_Injected(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Canvas* canvas, ::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_PIXELADJUSTRECT_INJECTED_OFFSET))(rectTransform, canvas, ret);
		}

		static ::System::Boolean PointInRectangle_Injected(::UnityEngine::Vector2& screenPoint, ::UnityEngine::RectTransform* rect, ::UnityEngine::Camera* cam, ::UnityEngine::Vector4& offset)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMUTILITY_POINTINRECTANGLE_INJECTED_OFFSET))(screenPoint, rect, cam, offset);
		}
	};
}
