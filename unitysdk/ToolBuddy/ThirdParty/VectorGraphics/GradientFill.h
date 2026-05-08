#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/AddressMode.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/FillMode.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/GradientFillType.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/GradientStop.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_ADDRESSING_OFFSET UNITYSDK_OFFSET(0x1A19E460)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1A19E420)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_OPACITY_OFFSET UNITYSDK_OFFSET(0x1A19E440)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_RADIALFOCUS_OFFSET UNITYSDK_OFFSET(0x1A19E480)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_STOPS_OFFSET UNITYSDK_OFFSET(0x1A19E400)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A19E3E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_ADDRESSING_OFFSET UNITYSDK_OFFSET(0x1A19E470)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1A19E430)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_OPACITY_OFFSET UNITYSDK_OFFSET(0x1A19E450)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_RADIALFOCUS_OFFSET UNITYSDK_OFFSET(0x1A19E490)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_STOPS_OFFSET UNITYSDK_OFFSET(0x1A19E410)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A19E3F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A19E4A0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int GradientFill_TypeDefinitionIndex = 28513;

	class GradientFill : public ::System::Object
	{
	public:
		::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::GradientStop>* _Stops_k__BackingField; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::AddressMode _Addressing_k__BackingField; // 0x18
		::ToolBuddy::ThirdParty::VectorGraphics::GradientFillType _Type_k__BackingField; // 0x1C
		::UnityEngine::Vector2 _RadialFocus_k__BackingField; // 0x20
		::ToolBuddy::ThirdParty::VectorGraphics::FillMode _Mode_k__BackingField; // 0x28
		::System::Single m_Opacity; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL__CTOR_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::GradientFillType get_Type()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::GradientFillType(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::ToolBuddy::ThirdParty::VectorGraphics::GradientFillType value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::GradientFillType))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_TYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::GradientStop>* get_Stops()
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::GradientStop>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_STOPS_OFFSET))(this);
		}

		::System::Void set_Stops(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::GradientStop>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::GradientStop>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_STOPS_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::FillMode get_Mode()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::FillMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::ToolBuddy::ThirdParty::VectorGraphics::FillMode value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::FillMode))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_MODE_OFFSET))(this, value);
		}

		::System::Single get_Opacity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_OPACITY_OFFSET))(this);
		}

		::System::Void set_Opacity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_OPACITY_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::AddressMode get_Addressing()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::AddressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_ADDRESSING_OFFSET))(this);
		}

		::System::Void set_Addressing(::ToolBuddy::ThirdParty::VectorGraphics::AddressMode value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::AddressMode))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_ADDRESSING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_RadialFocus()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_GET_RADIALFOCUS_OFFSET))(this);
		}

		::System::Void set_RadialFocus(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_GRADIENTFILL_SET_RADIALFOCUS_OFFSET))(this, value);
		}
	};
}
