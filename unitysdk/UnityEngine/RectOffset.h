#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }

#define UNITYENGINE_RECTOFFSET_ADD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A46E340)
#define UNITYENGINE_RECTOFFSET_ADD_OFFSET UNITYSDK_OFFSET(0x1A46E300)
#define UNITYENGINE_RECTOFFSET_DESTROY_OFFSET UNITYSDK_OFFSET(0x1A46DE80)
#define UNITYENGINE_RECTOFFSET_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A46DE00)
#define UNITYENGINE_RECTOFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1A46E2C0)
#define UNITYENGINE_RECTOFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1A46E2E0)
#define UNITYENGINE_RECTOFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1A46E290)
#define UNITYENGINE_RECTOFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1A46E2A0)
#define UNITYENGINE_RECTOFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0x1A46E2B0)
#define UNITYENGINE_RECTOFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x1A46E2F0)
#define UNITYENGINE_RECTOFFSET_INTERNALCREATE_OFFSET UNITYSDK_OFFSET(0x1A46DDE0)
#define UNITYENGINE_RECTOFFSET_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x1A46E2D0)
#define UNITYENGINE_RECTOFFSET_REMOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A46E390)
#define UNITYENGINE_RECTOFFSET_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A46E350)
#define UNITYENGINE_RECTOFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1A46DF40)
#define UNITYENGINE_RECTOFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x1A46DF10)
#define UNITYENGINE_RECTOFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1A46DF20)
#define UNITYENGINE_RECTOFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0x1A46DF30)
#define UNITYENGINE_RECTOFFSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A46DF50)
#define UNITYENGINE_RECTOFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A46DDF0)
#define UNITYENGINE_RECTOFFSET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A46DEB0)
#define UNITYENGINE_RECTOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A46DDC0)

namespace UnityEngine
{
	inline static constexpr unsigned int RectOffset_TypeDefinitionIndex = 3895;

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

		::UnityEngine::Rect Add(::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_ADD_OFFSET))(this, rect);
		}

		::UnityEngine::Rect Remove(::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_REMOVE_OFFSET))(this, rect);
		}

		::System::Void Add_Injected(::UnityEngine::Rect& rect, ::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_ADD_INJECTED_OFFSET))(this, rect, ret);
		}

		::System::Void Remove_Injected(::UnityEngine::Rect& rect, ::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_REMOVE_INJECTED_OFFSET))(this, rect, ret);
		}
	};
}
