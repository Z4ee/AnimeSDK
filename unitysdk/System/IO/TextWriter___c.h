#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_IO_TEXTWRITER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16348980)
#define SYSTEM_IO_TEXTWRITER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x163489B0)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x163489C0)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_1_OFFSET UNITYSDK_OFFSET(0x16348A50)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_2_OFFSET UNITYSDK_OFFSET(0x16348AE0)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_3_OFFSET UNITYSDK_OFFSET(0x16348B80)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_4_OFFSET UNITYSDK_OFFSET(0x16348C10)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_5_OFFSET UNITYSDK_OFFSET(0x16348CA0)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_6_OFFSET UNITYSDK_OFFSET(0x16348D40)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter___c_TypeDefinitionIndex = 702;

	class TextWriter___c : public ::System::Object
	{
	public:
		static ::System::IO::TextWriter___c** StaticGet___9()
		{
			return (::System::IO::TextWriter___c**)Il2CppClass::FromTypeDefinitionIndex(TextWriter___c_TypeDefinitionIndex)->GetStaticField(0x53D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__73_0(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_0_OFFSET))(this, state);
		}

		::System::Void __cctor_b__73_1(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_1_OFFSET))(this, state);
		}

		::System::Void __cctor_b__73_2(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_2_OFFSET))(this, state);
		}

		::System::Void __cctor_b__73_3(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_3_OFFSET))(this, state);
		}

		::System::Void __cctor_b__73_4(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_4_OFFSET))(this, state);
		}

		::System::Void __cctor_b__73_5(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_5_OFFSET))(this, state);
		}

		::System::Void __cctor_b__73_6(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_6_OFFSET))(this, state);
		}
	};
}
