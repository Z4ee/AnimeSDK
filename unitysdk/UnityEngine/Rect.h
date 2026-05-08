#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_RECT_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x948000)
#define UNITYENGINE_RECT_CONTAINS_2_OFFSET UNITYSDK_OFFSET(0x948040)
#define UNITYENGINE_RECT_CONTAINS_OFFSET UNITYSDK_OFFSET(0x947FC0)
#define UNITYENGINE_RECT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x948460)
#define UNITYENGINE_RECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x948310)
#define UNITYENGINE_RECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x948290)
#define UNITYENGINE_RECT_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x41FB20)
#define UNITYENGINE_RECT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x947E80)
#define UNITYENGINE_RECT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x43E9B0)
#define UNITYENGINE_RECT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define UNITYENGINE_RECT_GET_MAX_OFFSET UNITYSDK_OFFSET(0x947EF0)
#define UNITYENGINE_RECT_GET_MIN_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_RECT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_RECT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x41FDB0)
#define UNITYENGINE_RECT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x28B580)
#define UNITYENGINE_RECT_GET_TOP_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define UNITYENGINE_RECT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x3AB430)
#define UNITYENGINE_RECT_GET_XMAX_OFFSET UNITYSDK_OFFSET(0x947F80)
#define UNITYENGINE_RECT_GET_XMIN_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define UNITYENGINE_RECT_GET_X_OFFSET UNITYSDK_OFFSET(0x2E7F50)
#define UNITYENGINE_RECT_GET_YMAX_OFFSET UNITYSDK_OFFSET(0x947FA0)
#define UNITYENGINE_RECT_GET_YMIN_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define UNITYENGINE_RECT_GET_Y_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define UNITYENGINE_RECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1AE76A00)
#define UNITYENGINE_RECT_MINMAXRECT_OFFSET UNITYSDK_OFFSET(0x1AE76A10)
#define UNITYENGINE_RECT_NORMALIZEDTOPOINT_OFFSET UNITYSDK_OFFSET(0x1AE76F30)
#define UNITYENGINE_RECT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE770A0)
#define UNITYENGINE_RECT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE77060)
#define UNITYENGINE_RECT_ORDERMINMAX_OFFSET UNITYSDK_OFFSET(0x1AE76DD0)
#define UNITYENGINE_RECT_OVERLAPS_1_OFFSET UNITYSDK_OFFSET(0x948140)
#define UNITYENGINE_RECT_OVERLAPS_OFFSET UNITYSDK_OFFSET(0x9480F0)
#define UNITYENGINE_RECT_POINTTONORMALIZED_OFFSET UNITYSDK_OFFSET(0x1AE76FC0)
#define UNITYENGINE_RECT_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x947EB0)
#define UNITYENGINE_RECT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x469DB0)
#define UNITYENGINE_RECT_SET_MAX_OFFSET UNITYSDK_OFFSET(0x947F20)
#define UNITYENGINE_RECT_SET_MIN_OFFSET UNITYSDK_OFFSET(0x947ED0)
#define UNITYENGINE_RECT_SET_OFFSET UNITYSDK_OFFSET(0x41FAF0)
#define UNITYENGINE_RECT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define UNITYENGINE_RECT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x381830)
#define UNITYENGINE_RECT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x50C890)
#define UNITYENGINE_RECT_SET_XMAX_OFFSET UNITYSDK_OFFSET(0x947F90)
#define UNITYENGINE_RECT_SET_XMIN_OFFSET UNITYSDK_OFFSET(0x947F40)
#define UNITYENGINE_RECT_SET_X_OFFSET UNITYSDK_OFFSET(0x2E7CE0)
#define UNITYENGINE_RECT_SET_YMAX_OFFSET UNITYSDK_OFFSET(0x947FB0)
#define UNITYENGINE_RECT_SET_YMIN_OFFSET UNITYSDK_OFFSET(0x947F60)
#define UNITYENGINE_RECT_SET_Y_OFFSET UNITYSDK_OFFSET(0x50C880)
#define UNITYENGINE_RECT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x948550)
#define UNITYENGINE_RECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x948540)
#define UNITYENGINE_RECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x947E60)
#define UNITYENGINE_RECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2E1100)
#define UNITYENGINE_RECT__CTOR_OFFSET UNITYSDK_OFFSET(0x41FAF0)

namespace UnityEngine
{
	inline static constexpr unsigned int Rect_TypeDefinitionIndex = 5165;

	struct alignas(4) Rect
	{
		::System::Single m_XMin; // 0x10
		::System::Single m_YMin; // 0x14
		::System::Single m_Width; // 0x18
		::System::Single m_Height; // 0x1C

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single width, ::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT__CTOR_OFFSET))(this, x, y, width, height);
		}

		/*
		::System::Void _ctor_1(::UnityEngine::Vector2 position, ::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT__CTOR_1_OFFSET))(this, position, size);
		}
		*/

		::System::Void _ctor_2(::UnityEngine::Rect source)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT__CTOR_2_OFFSET))(this, source);
		}

		static ::UnityEngine::Rect get_zero()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Rect MinMaxRect(::System::Single xmin, ::System::Single ymin, ::System::Single xmax, ::System::Single ymax)
		{
			return ((::UnityEngine::Rect(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_MINMAXRECT_OFFSET))(xmin, ymin, xmax, ymax);
		}

		::System::Void Set(::System::Single x, ::System::Single y, ::System::Single width, ::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_OFFSET))(this, x, y, width, height);
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_X_OFFSET))(this, value);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_Y_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Vector2 get_position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_POSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_POSITION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector2 get_center()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_CENTER_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_center(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_CENTER_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector2 get_min()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_MIN_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_min(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_MIN_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector2 get_max()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_MAX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_max(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_MAX_OFFSET))(this, value);
		}
		*/

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_HEIGHT_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Vector2 get_size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_SIZE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_size(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_SIZE_OFFSET))(this, value);
		}
		*/

		::System::Single get_xMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_XMIN_OFFSET))(this);
		}

		::System::Void set_xMin(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_XMIN_OFFSET))(this, value);
		}

		::System::Single get_yMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_YMIN_OFFSET))(this);
		}

		::System::Void set_yMin(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_YMIN_OFFSET))(this, value);
		}

		::System::Single get_xMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_XMAX_OFFSET))(this);
		}

		::System::Void set_xMax(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_XMAX_OFFSET))(this, value);
		}

		::System::Single get_yMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_YMAX_OFFSET))(this);
		}

		::System::Void set_yMax(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_YMAX_OFFSET))(this, value);
		}

		/*
		::System::Boolean Contains(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_CONTAINS_OFFSET))(this, point);
		}
		*/

		/*
		::System::Boolean Contains_1(::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_CONTAINS_1_OFFSET))(this, point);
		}
		*/

		/*
		::System::Boolean Contains_2(::UnityEngine::Vector3 point, ::System::Boolean allowInverse)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_CONTAINS_2_OFFSET))(this, point, allowInverse);
		}
		*/

		static ::UnityEngine::Rect OrderMinMax(::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_ORDERMINMAX_OFFSET))(rect);
		}

		::System::Boolean Overlaps(::UnityEngine::Rect other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OVERLAPS_OFFSET))(this, other);
		}

		::System::Boolean Overlaps_1(::UnityEngine::Rect other, ::System::Boolean allowInverse)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OVERLAPS_1_OFFSET))(this, other, allowInverse);
		}

		/*
		static ::UnityEngine::Vector2 NormalizedToPoint(::UnityEngine::Rect rectangle, ::UnityEngine::Vector2 normalizedRectCoordinates)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_NORMALIZEDTOPOINT_OFFSET))(rectangle, normalizedRectCoordinates);
		}
		*/

		/*
		static ::UnityEngine::Vector2 PointToNormalized(::UnityEngine::Rect rectangle, ::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_POINTTONORMALIZED_OFFSET))(rectangle, point);
		}
		*/

		static ::System::Boolean op_Inequality(::UnityEngine::Rect lhs, ::UnityEngine::Rect rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rect lhs, ::UnityEngine::Rect rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Rect other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_TOSTRING_1_OFFSET))(this, format);
		}

		::System::Single get_left()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_LEFT_OFFSET))(this);
		}

		::System::Single get_right()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_RIGHT_OFFSET))(this);
		}

		::System::Single get_top()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_TOP_OFFSET))(this);
		}

		::System::Single get_bottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_BOTTOM_OFFSET))(this);
		}
	};
}
