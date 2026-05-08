#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }

#define UNITYENGINE_RECTOFFSET_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B662090)
#define UNITYENGINE_RECTOFFSET_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B662010)
#define UNITYENGINE_RECTOFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1B662480)
#define UNITYENGINE_RECTOFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B6624A0)
#define UNITYENGINE_RECTOFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1B662450)
#define UNITYENGINE_RECTOFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1B662460)
#define UNITYENGINE_RECTOFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0x1B662470)
#define UNITYENGINE_RECTOFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x1B6624B0)
#define UNITYENGINE_RECTOFFSET_INTERNALCREATE_OFFSET UNITYSDK_OFFSET(0x1B661FF0)
#define UNITYENGINE_RECTOFFSET_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x1B662490)
#define UNITYENGINE_RECTOFFSET_REMOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B662500)
#define UNITYENGINE_RECTOFFSET_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B6624C0)
#define UNITYENGINE_RECTOFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1B662150)
#define UNITYENGINE_RECTOFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x1B662120)
#define UNITYENGINE_RECTOFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1B662130)
#define UNITYENGINE_RECTOFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0x1B662140)
#define UNITYENGINE_RECTOFFSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B662160)
#define UNITYENGINE_RECTOFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B662000)
#define UNITYENGINE_RECTOFFSET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B6620C0)
#define UNITYENGINE_RECTOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B661FD0)

namespace UnityEngine
{
	inline static constexpr unsigned int RectOffset_TypeDefinitionIndex = 5167;

	class RectOffset : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Object* m_SourceStyle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* sourceStyle, ::System::IntPtr source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET__CTOR_1_OFFSET))(this, sourceStyle, source);
		}

		::System::Void _ctor_2(::System::Int32 left, ::System::Int32 right, ::System::Int32 top, ::System::Int32 bottom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET__CTOR_2_OFFSET))(this, left, right, top, bottom);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_FINALIZE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_TOSTRING_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_DESTROY_OFFSET))(this);
		}

		static ::System::IntPtr InternalCreate()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_INTERNALCREATE_OFFSET))();
		}

		static ::System::Void InternalDestroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_INTERNALDESTROY_OFFSET))(ptr);
		}

		::System::Int32 get_left()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_left(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_LEFT_OFFSET))(this, value);
		}

		::System::Int32 get_right()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_right(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_RIGHT_OFFSET))(this, value);
		}

		::System::Int32 get_top()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_TOP_OFFSET))(this);
		}

		::System::Void set_top(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_TOP_OFFSET))(this, value);
		}

		::System::Int32 get_bottom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_BOTTOM_OFFSET))(this);
		}

		::System::Void set_bottom(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_BOTTOM_OFFSET))(this, value);
		}

		::System::Int32 get_horizontal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_HORIZONTAL_OFFSET))(this);
		}

		::System::Int32 get_vertical()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_VERTICAL_OFFSET))(this);
		}

		::UnityEngine::Rect Remove(::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_REMOVE_OFFSET))(this, rect);
		}

		::System::Void Remove_Injected(::UnityEngine::Rect& rect, ::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_REMOVE_INJECTED_OFFSET))(this, rect, ret);
		}
	};
}
