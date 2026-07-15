#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_GUICLIP_PARENTCLIPSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A14650)
#define UNITYENGINE_GUICLIP_PARENTCLIPSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A145B0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIClip_ParentClipScope_TypeDefinitionIndex = 5217;

	struct alignas(1) GUIClip_ParentClipScope
	{
		::System::Boolean m_Disposed; // 0x10

		/*
		::System::Void _ctor(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PARENTCLIPSCOPE__CTOR_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICLIP_PARENTCLIPSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
