#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/Rect.h"

#define UNITYENGINE_CHARACTERINFO_GET_ADVANCE_OFFSET UNITYSDK_OFFSET(0x3B04370)
#define UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMLEFTUNFLIPPED_OFFSET UNITYSDK_OFFSET(0x38CBC60)
#define UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMLEFT_OFFSET UNITYSDK_OFFSET(0x38CBC60)
#define UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMRIGHTUNFLIPPED_OFFSET UNITYSDK_OFFSET(0x3B043C0)
#define UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMRIGHT_OFFSET UNITYSDK_OFFSET(0x3B04430)
#define UNITYENGINE_CHARACTERINFO_GET_UVTOPLEFTUNFLIPPED_OFFSET UNITYSDK_OFFSET(0x3B04410)
#define UNITYENGINE_CHARACTERINFO_GET_UVTOPLEFT_OFFSET UNITYSDK_OFFSET(0x3B04470)
#define UNITYENGINE_CHARACTERINFO_GET_UVTOPRIGHTUNFLIPPED_OFFSET UNITYSDK_OFFSET(0x3B043E0)
#define UNITYENGINE_CHARACTERINFO_GET_UVTOPRIGHT_OFFSET UNITYSDK_OFFSET(0x3B043E0)

namespace UnityEngine
{
	inline static constexpr unsigned int CharacterInfo_TypeDefinitionIndex = 5033;

	struct alignas(4) CharacterInfo
	{
		::System::Int32 index; // 0x10
		::UnityEngine::Rect uv; // 0x14
		::UnityEngine::Rect vert; // 0x24
		::System::Single width; // 0x34
		::System::Int32 size; // 0x38
		::UnityEngine::FontStyle style; // 0x3C
		::System::Boolean flipped; // 0x40

		::System::Int32 get_advance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_ADVANCE_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_uvBottomLeftUnFlipped()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMLEFTUNFLIPPED_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_uvBottomRightUnFlipped()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMRIGHTUNFLIPPED_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_uvTopRightUnFlipped()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVTOPRIGHTUNFLIPPED_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_uvTopLeftUnFlipped()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVTOPLEFTUNFLIPPED_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_uvBottomLeft()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMLEFT_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_uvBottomRight()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVBOTTOMRIGHT_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_uvTopRight()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVTOPRIGHT_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_uvTopLeft()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CHARACTERINFO_GET_UVTOPLEFT_OFFSET))(this);
		}
		*/
	};
}
