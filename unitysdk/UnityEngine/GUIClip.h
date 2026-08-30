#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_GUICLIP_GETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CAC8B30)
#define UNITYENGINE_GUICLIP_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x1CABCE30)
#define UNITYENGINE_GUICLIP_GET_VISIBLERECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CAC8A90)
#define UNITYENGINE_GUICLIP_GET_VISIBLERECT_OFFSET UNITYSDK_OFFSET(0x1CAC43C0)
#define UNITYENGINE_GUICLIP_INTERNAL_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x1CAC8AE0)
#define UNITYENGINE_GUICLIP_INTERNAL_POPPARENTCLIP_OFFSET UNITYSDK_OFFSET(0x1CAC8B70)
#define UNITYENGINE_GUICLIP_INTERNAL_POP_OFFSET UNITYSDK_OFFSET(0x1CAC6690)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CAC8B60)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_OFFSET UNITYSDK_OFFSET(0x1CAC8B50)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CAC8AD0)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSH_OFFSET UNITYSDK_OFFSET(0x1CAC8AA0)
#define UNITYENGINE_GUICLIP_POP_OFFSET UNITYSDK_OFFSET(0x1CAC7E00)
#define UNITYENGINE_GUICLIP_PUSH_OFFSET UNITYSDK_OFFSET(0x1CAC65E0)
#define UNITYENGINE_GUICLIP_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CAC8B40)
#define UNITYENGINE_GUICLIP_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1CABCED0)
#define UNITYENGINE_GUICLIP_UNCLIPTOWINDOW_OFFSET UNITYSDK_OFFSET(0x1CAC8B80)
#define UNITYENGINE_GUICLIP_UNCLIPTOWINDOW_VECTOR2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CAC8B20)
#define UNITYENGINE_GUICLIP_UNCLIPTOWINDOW_VECTOR2_OFFSET UNITYSDK_OFFSET(0x1CAC8AF0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIClip_TypeDefinitionIndex = 5161;

	class GUIClip : public ::System::Object
	{
	public:
		static ::UnityEngine::Rect get_visibleRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GET_VISIBLERECT_OFFSET))();
		}

		static ::System::Void Internal_Push(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Internal_Pop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_POP_OFFSET))();
		}

		static ::System::Int32 Internal_GetCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_GETCOUNT_OFFSET))();
		}

		static ::UnityEngine::Vector2 UnclipToWindow_Vector2(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_UNCLIPTOWINDOW_VECTOR2_OFFSET))(a1);
		}

		static ::UnityEngine::Matrix4x4 GetMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GETMATRIX_OFFSET))();
		}

		static ::System::Void SetMatrix(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_SETMATRIX_OFFSET))(a1);
		}

		static ::System::Void Internal_PushParentClip(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_PopParentClip()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_POPPARENTCLIP_OFFSET))();
		}

		static ::System::Void Push(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PUSH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Pop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_POP_OFFSET))();
		}

		static ::UnityEngine::Vector2 UnclipToWindow(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_UNCLIPTOWINDOW_OFFSET))(a1);
		}

		static ::System::Void get_visibleRect_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GET_VISIBLERECT_INJECTED_OFFSET))(a1);
		}

		static ::System::Void Internal_Push_Injected(::UnityEngine::Rect& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSH_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void UnclipToWindow_Vector2_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_UNCLIPTOWINDOW_VECTOR2_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void GetMatrix_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GETMATRIX_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetMatrix_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_SETMATRIX_INJECTED_OFFSET))(a1);
		}

		static ::System::Void Internal_PushParentClip_Injected(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Rect& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_INJECTED_OFFSET))(a1, a2);
		}
	};
}
