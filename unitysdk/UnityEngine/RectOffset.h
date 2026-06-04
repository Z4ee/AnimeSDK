#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }

#define UNITYENGINE_RECTOFFSET_ADD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDC20)
#define UNITYENGINE_RECTOFFSET_ADD_OFFSET UNITYSDK_OFFSET(0x1B2BDBE0)
#define UNITYENGINE_RECTOFFSET_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B2BD7F0)
#define UNITYENGINE_RECTOFFSET_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B2BD770)
#define UNITYENGINE_RECTOFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1B2BDBA0)
#define UNITYENGINE_RECTOFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B2BDBC0)
#define UNITYENGINE_RECTOFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1B2BDB70)
#define UNITYENGINE_RECTOFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1B2BDB80)
#define UNITYENGINE_RECTOFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0x1B2BDB90)
#define UNITYENGINE_RECTOFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x1B2BDBD0)
#define UNITYENGINE_RECTOFFSET_INTERNALCREATE_OFFSET UNITYSDK_OFFSET(0x1B2BD750)
#define UNITYENGINE_RECTOFFSET_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0x1B2BDBB0)
#define UNITYENGINE_RECTOFFSET_REMOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2BDC70)
#define UNITYENGINE_RECTOFFSET_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B2BDC30)
#define UNITYENGINE_RECTOFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1B2BD8B0)
#define UNITYENGINE_RECTOFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x1B2BD880)
#define UNITYENGINE_RECTOFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1B2BD890)
#define UNITYENGINE_RECTOFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0x1B2BD8A0)
#define UNITYENGINE_RECTOFFSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2BD8C0)
#define UNITYENGINE_RECTOFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2BD760)
#define UNITYENGINE_RECTOFFSET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B2BD820)
#define UNITYENGINE_RECTOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2BD730)

namespace UnityEngine
{
	inline static constexpr unsigned int RectOffset_TypeDefinitionIndex = 4069;

	class RectOffset : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Object* m_SourceStyle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
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

		static ::System::Void InternalDestroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_INTERNALDESTROY_OFFSET))(a1);
		}

		::System::Int32 get_left()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_left(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_LEFT_OFFSET))(this, a1);
		}

		::System::Int32 get_right()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_right(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_RIGHT_OFFSET))(this, a1);
		}

		::System::Int32 get_top()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_TOP_OFFSET))(this);
		}

		::System::Void set_top(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_TOP_OFFSET))(this, a1);
		}

		::System::Int32 get_bottom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_BOTTOM_OFFSET))(this);
		}

		::System::Void set_bottom(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_BOTTOM_OFFSET))(this, a1);
		}

		::System::Int32 get_horizontal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_HORIZONTAL_OFFSET))(this);
		}

		::System::Int32 get_vertical()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_VERTICAL_OFFSET))(this);
		}

		::UnityEngine::Rect Add(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_ADD_OFFSET))(this, a1);
		}

		::UnityEngine::Rect Remove(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_REMOVE_OFFSET))(this, a1);
		}

		::System::Void Add_Injected(::UnityEngine::Rect& a1, ::UnityEngine::Rect& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_ADD_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void Remove_Injected(::UnityEngine::Rect& a1, ::UnityEngine::Rect& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_REMOVE_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
