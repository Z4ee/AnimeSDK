#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA9F070)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9F0B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER___C__PUSHNODE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1DA9F0C0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleResolver___c_TypeDefinitionIndex = 31758;

	class SVGStyleResolver___c : public ::System::Object
	{
	public:
		static ::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver___c** StaticGet___9()
		{
			return (::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver___c**)Il2CppClass::FromTypeDefinitionIndex(SVGStyleResolver___c_TypeDefinitionIndex)->GetStaticField(0x26FC0);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SVGStyleResolver___c_TypeDefinitionIndex)->GetStaticField(0x26FC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER___C__CTOR_OFFSET))(this);
		}

		::System::String* _PushNode_b__0_0(::System::String* x)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER___C__PUSHNODE_B__0_0_OFFSET))(this, x);
		}
	};
}
