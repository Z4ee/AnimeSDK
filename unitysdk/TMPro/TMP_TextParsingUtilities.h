#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TMPRO_TMP_TEXTPARSINGUTILITIES_CONVERTTOUTF32_OFFSET UNITYSDK_OFFSET(0x1894CBF0)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_GETHASHCODECASESENSITIVE_OFFSET UNITYSDK_OFFSET(0x18966040)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18965F70)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18965F40)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_ISHIGHSURROGATE_OFFSET UNITYSDK_OFFSET(0x18966280)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_ISLOWSURROGATE_OFFSET UNITYSDK_OFFSET(0x18966290)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_TOLOWERASCIIFAST_1_OFFSET UNITYSDK_OFFSET(0x189661F0)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_TOLOWERASCIIFAST_OFFSET UNITYSDK_OFFSET(0x18966120)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_TOUPPERASCIIFAST_1_OFFSET UNITYSDK_OFFSET(0x18966180)
#define TMPRO_TMP_TEXTPARSINGUTILITIES_TOUPPERASCIIFAST_OFFSET UNITYSDK_OFFSET(0x1894FB90)
#define TMPRO_TMP_TEXTPARSINGUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x18965F00)
#define TMPRO_TMP_TEXTPARSINGUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x18965F30)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextParsingUtilities_TypeDefinitionIndex = 34402;

	class TMP_TextParsingUtilities : public ::System::Object
	{
	public:
		static ::TMPro::TMP_TextParsingUtilities** StaticGet_s_Instance()
		{
			return (::TMPro::TMP_TextParsingUtilities**)Il2CppClass::FromTypeDefinitionIndex(TMP_TextParsingUtilities_TypeDefinitionIndex)->GetStaticField(0x2F640);
		}
		// static const ::System::String* k_LookupStringL; // 0x0
		// static const ::System::String* k_LookupStringU; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES__CTOR_OFFSET))(this);
		}

		static ::TMPro::TMP_TextParsingUtilities* get_instance()
		{
			return ((::TMPro::TMP_TextParsingUtilities*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_GET_INSTANCE_OFFSET))();
		}

		static ::System::Int32 GetHashCode(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_GETHASHCODE_OFFSET))(s);
		}

		static ::System::Int32 GetHashCodeCaseSensitive(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_GETHASHCODECASESENSITIVE_OFFSET))(s);
		}

		static ::System::Char ToLowerASCIIFast(::System::Char c)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_TOLOWERASCIIFAST_OFFSET))(c);
		}

		static ::System::Char ToUpperASCIIFast(::System::Char c)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_TOUPPERASCIIFAST_OFFSET))(c);
		}

		static ::System::UInt32 ToUpperASCIIFast_1(::System::UInt32 c)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_TOUPPERASCIIFAST_1_OFFSET))(c);
		}

		static ::System::UInt32 ToLowerASCIIFast_1(::System::UInt32 c)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_TOLOWERASCIIFAST_1_OFFSET))(c);
		}

		static ::System::Boolean IsHighSurrogate(::System::UInt32 c)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_ISHIGHSURROGATE_OFFSET))(c);
		}

		static ::System::Boolean IsLowSurrogate(::System::UInt32 c)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_ISLOWSURROGATE_OFFSET))(c);
		}

		static ::System::UInt32 ConvertToUTF32(::System::UInt32 highSurrogate, ::System::UInt32 lowSurrogate)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTPARSINGUTILITIES_CONVERTTOUTF32_OFFSET))(highSurrogate, lowSurrogate);
		}
	};
}
