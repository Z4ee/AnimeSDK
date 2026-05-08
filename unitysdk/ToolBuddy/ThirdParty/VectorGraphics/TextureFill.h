#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/AddressMode.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/FillMode.h"

namespace UnityEngine { class Texture2D; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_GET_ADDRESSING_OFFSET UNITYSDK_OFFSET(0x1A1C2EF0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1A1C2EB0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_GET_OPACITY_OFFSET UNITYSDK_OFFSET(0x1A1C2ED0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1A1C2E90)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_SET_ADDRESSING_OFFSET UNITYSDK_OFFSET(0x1A1C2F00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1A1C2EC0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_SET_OPACITY_OFFSET UNITYSDK_OFFSET(0x1A1C2EE0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1A1C2EA0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1AE8F0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int TextureFill_TypeDefinitionIndex = 28514;

	class TextureFill : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* _Texture_k__BackingField; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::FillMode _Mode_k__BackingField; // 0x18
		::ToolBuddy::ThirdParty::VectorGraphics::AddressMode _Addressing_k__BackingField; // 0x1C
		::System::Single m_Opacity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_Texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void set_Texture(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_SET_TEXTURE_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::FillMode get_Mode()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::FillMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::ToolBuddy::ThirdParty::VectorGraphics::FillMode value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::FillMode))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_SET_MODE_OFFSET))(this, value);
		}

		::System::Single get_Opacity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_GET_OPACITY_OFFSET))(this);
		}

		::System::Void set_Opacity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_SET_OPACITY_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::AddressMode get_Addressing()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::AddressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_GET_ADDRESSING_OFFSET))(this);
		}

		::System::Void set_Addressing(::ToolBuddy::ThirdParty::VectorGraphics::AddressMode value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::AddressMode))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_TEXTUREFILL_SET_ADDRESSING_OFFSET))(this, value);
		}
	};
}
