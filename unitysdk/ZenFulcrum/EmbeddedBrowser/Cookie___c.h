#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4F3CC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__COPY_B__17_0_OFFSET UNITYSDK_OFFSET(0x1B4F3D10)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__COPY_B__18_0_OFFSET UNITYSDK_OFFSET(0x1B4F4160)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F3D00)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Cookie___c_TypeDefinitionIndex = 36550;

	class Cookie___c : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::Cookie___c** StaticGet___9()
		{
			return (::ZenFulcrum::EmbeddedBrowser::Cookie___c**)Il2CppClass::FromTypeDefinitionIndex(Cookie___c_TypeDefinitionIndex)->GetStaticField(0x65490);
		}
		static ::System::Func_2<::System::String*, ::System::DateTime>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(Cookie___c_TypeDefinitionIndex)->GetStaticField(0x65498);
		}
		static ::System::Func_2<::System::DateTime, ::System::String*>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::DateTime, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Cookie___c_TypeDefinitionIndex)->GetStaticField(0x654A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__CTOR_OFFSET))(this);
		}

		::System::DateTime _Copy_b__17_0(::System::String* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__COPY_B__17_0_OFFSET))(this, a1);
		}

		::System::String* _Copy_b__18_0(::System::DateTime a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__COPY_B__18_0_OFFSET))(this, a1);
		}
	};
}
