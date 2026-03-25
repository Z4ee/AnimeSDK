#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C7C8F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__COPY_B__17_0_OFFSET UNITYSDK_OFFSET(0x18C7C940)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__COPY_B__18_0_OFFSET UNITYSDK_OFFSET(0x18C7CD90)
#define ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7C930)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Cookie___c_TypeDefinitionIndex = 30530;

	class Cookie___c : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::Cookie___c** StaticGet___9()
		{
			return (::ZenFulcrum::EmbeddedBrowser::Cookie___c**)Il2CppClass::FromTypeDefinitionIndex(Cookie___c_TypeDefinitionIndex)->GetStaticField(0x35E70);
		}
		static ::System::Func_2<::System::String*, ::System::DateTime>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(Cookie___c_TypeDefinitionIndex)->GetStaticField(0x35E78);
		}
		static ::System::Func_2<::System::DateTime, ::System::String*>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::DateTime, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Cookie___c_TypeDefinitionIndex)->GetStaticField(0x35E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__CTOR_OFFSET))(this);
		}

		::System::DateTime _Copy_b__17_0(::System::String* s)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__COPY_B__17_0_OFFSET))(this, s);
		}

		::System::String* _Copy_b__18_0(::System::DateTime s)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_COOKIE___C__COPY_B__18_0_OFFSET))(this, s);
		}
	};
}
