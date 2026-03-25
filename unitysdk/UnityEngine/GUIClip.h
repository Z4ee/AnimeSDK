#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_GUICLIP_GETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A72120)
#define UNITYENGINE_GUICLIP_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x18A68300)
#define UNITYENGINE_GUICLIP_GET_VISIBLERECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A720C0)
#define UNITYENGINE_GUICLIP_GET_VISIBLERECT_OFFSET UNITYSDK_OFFSET(0x18A6DE70)
#define UNITYENGINE_GUICLIP_INTERNAL_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x18A72110)
#define UNITYENGINE_GUICLIP_INTERNAL_POPPARENTCLIP_OFFSET UNITYSDK_OFFSET(0x18A72160)
#define UNITYENGINE_GUICLIP_INTERNAL_POP_OFFSET UNITYSDK_OFFSET(0x18A6FA30)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A72150)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_OFFSET UNITYSDK_OFFSET(0x18A72140)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A72100)
#define UNITYENGINE_GUICLIP_INTERNAL_PUSH_OFFSET UNITYSDK_OFFSET(0x18A720D0)
#define UNITYENGINE_GUICLIP_POP_OFFSET UNITYSDK_OFFSET(0x18A713A0)
#define UNITYENGINE_GUICLIP_PUSH_OFFSET UNITYSDK_OFFSET(0x18A6F980)
#define UNITYENGINE_GUICLIP_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A72130)
#define UNITYENGINE_GUICLIP_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x18A683A0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIClip_TypeDefinitionIndex = 5108;

	class GUIClip : public ::System::Object
	{
	public:
		static ::UnityEngine::Rect get_visibleRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GET_VISIBLERECT_OFFSET))();
		}

		static ::System::Void Internal_Push(::UnityEngine::Rect screenRect, ::UnityEngine::Vector2 scrollOffset, ::UnityEngine::Vector2 renderOffset, ::System::Boolean resetOffset)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSH_OFFSET))(screenRect, scrollOffset, renderOffset, resetOffset);
		}

		static ::System::Void Internal_Pop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_POP_OFFSET))();
		}

		static ::System::Int32 Internal_GetCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_GETCOUNT_OFFSET))();
		}

		static ::UnityEngine::Matrix4x4 GetMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GETMATRIX_OFFSET))();
		}

		static ::System::Void SetMatrix(::UnityEngine::Matrix4x4 m)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_SETMATRIX_OFFSET))(m);
		}

		static ::System::Void Internal_PushParentClip(::UnityEngine::Matrix4x4 objectTransform, ::UnityEngine::Rect clipRect)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_OFFSET))(objectTransform, clipRect);
		}

		static ::System::Void Internal_PopParentClip()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_POPPARENTCLIP_OFFSET))();
		}

		static ::System::Void Push(::UnityEngine::Rect screenRect, ::UnityEngine::Vector2 scrollOffset, ::UnityEngine::Vector2 renderOffset, ::System::Boolean resetOffset)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PUSH_OFFSET))(screenRect, scrollOffset, renderOffset, resetOffset);
		}

		static ::System::Void Pop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_POP_OFFSET))();
		}

		static ::System::Void get_visibleRect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GET_VISIBLERECT_INJECTED_OFFSET))(ret);
		}

		static ::System::Void Internal_Push_Injected(::UnityEngine::Rect& screenRect, ::UnityEngine::Vector2& scrollOffset, ::UnityEngine::Vector2& renderOffset, ::System::Boolean resetOffset)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSH_INJECTED_OFFSET))(screenRect, scrollOffset, renderOffset, resetOffset);
		}

		static ::System::Void GetMatrix_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_GETMATRIX_INJECTED_OFFSET))(ret);
		}

		static ::System::Void SetMatrix_Injected(::UnityEngine::Matrix4x4& m)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_SETMATRIX_INJECTED_OFFSET))(m);
		}

		static ::System::Void Internal_PushParentClip_Injected(::UnityEngine::Matrix4x4& objectTransform, ::UnityEngine::Rect& clipRect)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_INTERNAL_PUSHPARENTCLIP_INJECTED_OFFSET))(objectTransform, clipRect);
		}
	};
}
