#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_GUICLIP_PARENTCLIPSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CFF50)
#define UNITYENGINE_GUICLIP_PARENTCLIPSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x9CFEB0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIClip_ParentClipScope_TypeDefinitionIndex = 6403;

	struct alignas(1) GUIClip_ParentClipScope
	{
		::System::Boolean m_Disposed; // 0x10

		/*
		::System::Void _ctor(::UnityEngine::Matrix4x4 objectTransform, ::UnityEngine::Rect clipRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PARENTCLIPSCOPE__CTOR_OFFSET))(this, objectTransform, clipRect);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PARENTCLIPSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
