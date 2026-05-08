#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing { class Writer; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_MULTIFORMATWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1886C170)
#define ZXING_MULTIFORMATWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1886B810)
#define ZXING_MULTIFORMATWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1886C4A0)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1886C4B0)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__2_OFFSET UNITYSDK_OFFSET(0x1886C500)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__3_OFFSET UNITYSDK_OFFSET(0x1886C550)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__4_OFFSET UNITYSDK_OFFSET(0x1886C5A0)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__5_OFFSET UNITYSDK_OFFSET(0x1886C650)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__6_OFFSET UNITYSDK_OFFSET(0x1886C6A0)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__7_OFFSET UNITYSDK_OFFSET(0x1886C6F0)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__8_OFFSET UNITYSDK_OFFSET(0x1886C740)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__9_OFFSET UNITYSDK_OFFSET(0x1886C790)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__A_OFFSET UNITYSDK_OFFSET(0x1886C7E0)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__B_OFFSET UNITYSDK_OFFSET(0x1886C830)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__C_OFFSET UNITYSDK_OFFSET(0x1886C880)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__D_OFFSET UNITYSDK_OFFSET(0x1886C8D0)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__E_OFFSET UNITYSDK_OFFSET(0x1886C920)
#define ZXING_MULTIFORMATWRITER___CCTOR_B__F_OFFSET UNITYSDK_OFFSET(0x1886C960)

namespace ZXing
{
	inline static constexpr unsigned int MultiFormatWriter_TypeDefinitionIndex = 8597;

	class MultiFormatWriter : public ::System::Object
	{
	public:
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate1b()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x7970);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate1c()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x7978);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate1a()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x7980);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate16()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x7988);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate19()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x7990);
		}
		static ::System::Collections::Generic::IDictionary_2<::ZXing::BarcodeFormat, ::System::Func_1<::ZXing::Writer*>*>** StaticGet_formatMap()
		{
			return (::System::Collections::Generic::IDictionary_2<::ZXing::BarcodeFormat, ::System::Func_1<::ZXing::Writer*>*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x7998);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate10()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x79A0);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate13()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x79A8);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate17()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x79B0);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate1d()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x79B8);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate18()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x79C0);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate11()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x79C8);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate15()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x79D0);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate14()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x79D8);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate12()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x79E0);
		}
		static ::System::Func_1<::ZXing::Writer*>** StaticGet_CS___9__CachedAnonymousMethodDelegate1e()
		{
			return (::System::Func_1<::ZXing::Writer*>**)Il2CppClass::FromTypeDefinitionIndex(MultiFormatWriter_TypeDefinitionIndex)->GetStaticField(0x79E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER_ENCODE_OFFSET))(this, contents, format, width, height, hints);
		}

		static ::ZXing::Writer* __cctor_b__1()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__1_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__2()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__2_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__3()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__3_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__4()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__4_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__5()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__5_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__6()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__6_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__7()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__7_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__8()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__8_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__9()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__9_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__a()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__A_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__b()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__B_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__c()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__C_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__d()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__D_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__e()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__E_OFFSET))();
		}

		static ::ZXing::Writer* __cctor_b__f()
		{
			return ((::ZXing::Writer*(*)())((::PBYTE)hIl2Cpp + ZXING_MULTIFORMATWRITER___CCTOR_B__F_OFFSET))();
		}
	};
}
