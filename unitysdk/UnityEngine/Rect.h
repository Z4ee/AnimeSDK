#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_RECT_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x3A54790)
#define UNITYENGINE_RECT_CONTAINS_2_OFFSET UNITYSDK_OFFSET(0x3C64960)
#define UNITYENGINE_RECT_CONTAINS_OFFSET UNITYSDK_OFFSET(0x3A54750)
#define UNITYENGINE_RECT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C64B10)
#define UNITYENGINE_RECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C64A10)
#define UNITYENGINE_RECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A54A30)
#define UNITYENGINE_RECT_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x3A54C30)
#define UNITYENGINE_RECT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x3A545F0)
#define UNITYENGINE_RECT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xB5A7F0)
#define UNITYENGINE_RECT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x213E0)
#define UNITYENGINE_RECT_GET_MAX_OFFSET UNITYSDK_OFFSET(0x3A54660)
#define UNITYENGINE_RECT_GET_MIN_OFFSET UNITYSDK_OFFSET(0x161E0)
#define UNITYENGINE_RECT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x161E0)
#define UNITYENGINE_RECT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x3A54C20)
#define UNITYENGINE_RECT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x7846F0)
#define UNITYENGINE_RECT_GET_TOP_OFFSET UNITYSDK_OFFSET(0x784700)
#define UNITYENGINE_RECT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xB5A200)
#define UNITYENGINE_RECT_GET_XMAX_OFFSET UNITYSDK_OFFSET(0x3A54710)
#define UNITYENGINE_RECT_GET_XMIN_OFFSET UNITYSDK_OFFSET(0x213E0)
#define UNITYENGINE_RECT_GET_X_OFFSET UNITYSDK_OFFSET(0x213E0)
#define UNITYENGINE_RECT_GET_YMAX_OFFSET UNITYSDK_OFFSET(0x3A54730)
#define UNITYENGINE_RECT_GET_YMIN_OFFSET UNITYSDK_OFFSET(0x784700)
#define UNITYENGINE_RECT_GET_Y_OFFSET UNITYSDK_OFFSET(0x784700)
#define UNITYENGINE_RECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1EABDC10)
#define UNITYENGINE_RECT_MINMAXRECT_OFFSET UNITYSDK_OFFSET(0x1EABDC20)
#define UNITYENGINE_RECT_NORMALIZEDTOPOINT_OFFSET UNITYSDK_OFFSET(0x1EABE140)
#define UNITYENGINE_RECT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EABE2B0)
#define UNITYENGINE_RECT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EABE270)
#define UNITYENGINE_RECT_ORDERMINMAX_OFFSET UNITYSDK_OFFSET(0x1EABDFE0)
#define UNITYENGINE_RECT_OVERLAPS_1_OFFSET UNITYSDK_OFFSET(0x3A548E0)
#define UNITYENGINE_RECT_OVERLAPS_OFFSET UNITYSDK_OFFSET(0x3A54890)
#define UNITYENGINE_RECT_POINTTONORMALIZED_OFFSET UNITYSDK_OFFSET(0x1EABE1D0)
#define UNITYENGINE_RECT_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x3A54620)
#define UNITYENGINE_RECT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x3A546C0)
#define UNITYENGINE_RECT_SET_MAX_OFFSET UNITYSDK_OFFSET(0x3A54690)
#define UNITYENGINE_RECT_SET_MIN_OFFSET UNITYSDK_OFFSET(0x3A54640)
#define UNITYENGINE_RECT_SET_OFFSET UNITYSDK_OFFSET(0x82E380)
#define UNITYENGINE_RECT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x16050)
#define UNITYENGINE_RECT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x869800)
#define UNITYENGINE_RECT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x3A546B0)
#define UNITYENGINE_RECT_SET_XMAX_OFFSET UNITYSDK_OFFSET(0x3A54720)
#define UNITYENGINE_RECT_SET_XMIN_OFFSET UNITYSDK_OFFSET(0x3A546D0)
#define UNITYENGINE_RECT_SET_X_OFFSET UNITYSDK_OFFSET(0x21240)
#define UNITYENGINE_RECT_SET_YMAX_OFFSET UNITYSDK_OFFSET(0x3A54740)
#define UNITYENGINE_RECT_SET_YMIN_OFFSET UNITYSDK_OFFSET(0x3A546F0)
#define UNITYENGINE_RECT_SET_Y_OFFSET UNITYSDK_OFFSET(0x3A545E0)
#define UNITYENGINE_RECT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3C64C00)
#define UNITYENGINE_RECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C64BF0)
#define UNITYENGINE_RECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3A545C0)
#define UNITYENGINE_RECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x148D0)
#define UNITYENGINE_RECT__CTOR_OFFSET UNITYSDK_OFFSET(0x82E380)

namespace UnityEngine
{
	inline static constexpr unsigned int Rect_TypeDefinitionIndex = 4080;

	struct alignas(4) Rect
	{
		::System::Single m_XMin; // 0x10
		::System::Single m_YMin; // 0x14
		::System::Single m_Width; // 0x18
		::System::Single m_Height; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		/*
		::System::Void _ctor_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT__CTOR_1_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void _ctor_2(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT__CTOR_2_OFFSET))(this, a1);
		}

		static ::UnityEngine::Rect get_zero()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Rect MinMaxRect(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Rect(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_MINMAXRECT_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Set(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_Y_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector2 get_position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_POSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_position(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_POSITION_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector2 get_center()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_CENTER_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_center(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_CENTER_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector2 get_min()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_MIN_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_min(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_MIN_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Vector2 get_max()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_MAX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_max(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_MAX_OFFSET))(this, a1);
		}
		*/

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_HEIGHT_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector2 get_size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_SIZE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_size(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_SIZE_OFFSET))(this, a1);
		}
		*/

		::System::Single get_xMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_XMIN_OFFSET))(this);
		}

		::System::Void set_xMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_XMIN_OFFSET))(this, a1);
		}

		::System::Single get_yMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_YMIN_OFFSET))(this);
		}

		::System::Void set_yMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_YMIN_OFFSET))(this, a1);
		}

		::System::Single get_xMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_XMAX_OFFSET))(this);
		}

		::System::Void set_xMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_XMAX_OFFSET))(this, a1);
		}

		::System::Single get_yMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_YMAX_OFFSET))(this);
		}

		::System::Void set_yMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_YMAX_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Contains(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_CONTAINS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean Contains_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_CONTAINS_1_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean Contains_2(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_CONTAINS_2_OFFSET))(this, a1, a2);
		}
		*/

		static ::UnityEngine::Rect OrderMinMax(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_ORDERMINMAX_OFFSET))(a1);
		}

		::System::Boolean Overlaps(::UnityEngine::Rect a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OVERLAPS_OFFSET))(this, a1);
		}

		::System::Boolean Overlaps_1(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OVERLAPS_1_OFFSET))(this, a1, a2);
		}

		/*
		static ::UnityEngine::Vector2 NormalizedToPoint(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_NORMALIZEDTOPOINT_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 PointToNormalized(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_POINTTONORMALIZED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean op_Inequality(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Rect a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_TOSTRING_1_OFFSET))(this, a1);
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
