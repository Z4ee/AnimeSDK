#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoder; }
namespace System::Text { class Encoding; }

#define SYSTEM_IO_BINARYWRITER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1BD40FF0)
#define SYSTEM_IO_BINARYWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD40F00)
#define SYSTEM_IO_BINARYWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1BD410F0)
#define SYSTEM_IO_BINARYWRITER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x1BD41070)
#define SYSTEM_IO_BINARYWRITER_SEEK_OFFSET UNITYSDK_OFFSET(0x1BD41180)
#define SYSTEM_IO_BINARYWRITER_WRITE7BITENCODEDINT_OFFSET UNITYSDK_OFFSET(0x1BD42860)
#define SYSTEM_IO_BINARYWRITER_WRITE_10_OFFSET UNITYSDK_OFFSET(0x1BD41BA0)
#define SYSTEM_IO_BINARYWRITER_WRITE_11_OFFSET UNITYSDK_OFFSET(0x1BD41C80)
#define SYSTEM_IO_BINARYWRITER_WRITE_12_OFFSET UNITYSDK_OFFSET(0x1BD41DA0)
#define SYSTEM_IO_BINARYWRITER_WRITE_13_OFFSET UNITYSDK_OFFSET(0x1BD41EC0)
#define SYSTEM_IO_BINARYWRITER_WRITE_14_OFFSET UNITYSDK_OFFSET(0x1BD42080)
#define SYSTEM_IO_BINARYWRITER_WRITE_15_OFFSET UNITYSDK_OFFSET(0x1BD42240)
#define SYSTEM_IO_BINARYWRITER_WRITE_16_OFFSET UNITYSDK_OFFSET(0x1BD422F0)
#define SYSTEM_IO_BINARYWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1BD412E0)
#define SYSTEM_IO_BINARYWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1BD41370)
#define SYSTEM_IO_BINARYWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1BD41400)
#define SYSTEM_IO_BINARYWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x1BD41500)
#define SYSTEM_IO_BINARYWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x1BD415B0)
#define SYSTEM_IO_BINARYWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x1BD41770)
#define SYSTEM_IO_BINARYWRITER_WRITE_7_OFFSET UNITYSDK_OFFSET(0x1BD41930)
#define SYSTEM_IO_BINARYWRITER_WRITE_8_OFFSET UNITYSDK_OFFSET(0x1BD419E0)
#define SYSTEM_IO_BINARYWRITER_WRITE_9_OFFSET UNITYSDK_OFFSET(0x1BD41AC0)
#define SYSTEM_IO_BINARYWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD41220)
#define SYSTEM_IO_BINARYWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD429A0)
#define SYSTEM_IO_BINARYWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD40C40)
#define SYSTEM_IO_BINARYWRITER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BD40EF0)
#define SYSTEM_IO_BINARYWRITER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BD40D30)
#define SYSTEM_IO_BINARYWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD40AA0)

namespace System::IO
{
	inline static constexpr unsigned int BinaryWriter_TypeDefinitionIndex = 663;

	class BinaryWriter : public ::System::Object
	{
	public:
		static ::System::IO::BinaryWriter** StaticGet_Null()
		{
			return (::System::IO::BinaryWriter**)Il2CppClass::FromTypeDefinitionIndex(BinaryWriter_TypeDefinitionIndex)->GetStaticField(0xAEF0);
		}
		::Il2CppArray<::System::Byte>* _buffer; // 0x10
		::System::Text::Encoder* _encoder; // 0x18
		::Il2CppArray<::System::Char>* _tmpOneCharBuffer; // 0x20
		::System::Text::Encoding* _encoding; // 0x28
		::Il2CppArray<::System::Byte>* _largeByteBuffer; // 0x30
		::System::IO::Stream* OutStream; // 0x38
		::System::Int32 _maxChars; // 0x40
		::System::Boolean _leaveOpen; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::System::Text::Encoding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::IO::Stream* a1, ::System::Text::Encoding* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER__CCTOR_OFFSET))();
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_DISPOSE_1_OFFSET))(this);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int32 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void Write(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_OFFSET))(this, a1);
		}

		::System::Void Write_1(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_1_OFFSET))(this, a1);
		}

		::System::Void Write_2(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_2_OFFSET))(this, a1);
		}

		::System::Void Write_3(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_3_OFFSET))(this, a1);
		}

		::System::Void Write_4(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write_5(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_5_OFFSET))(this, a1);
		}

		::System::Void Write_6(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_6_OFFSET))(this, a1);
		}

		::System::Void Write_7(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_7_OFFSET))(this, a1);
		}

		::System::Void Write_8(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_8_OFFSET))(this, a1);
		}

		::System::Void Write_9(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_9_OFFSET))(this, a1);
		}

		::System::Void Write_10(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_10_OFFSET))(this, a1);
		}

		::System::Void Write_11(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_11_OFFSET))(this, a1);
		}

		::System::Void Write_12(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_12_OFFSET))(this, a1);
		}

		::System::Void Write_13(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_13_OFFSET))(this, a1);
		}

		::System::Void Write_14(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_14_OFFSET))(this, a1);
		}

		::System::Void Write_15(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_15_OFFSET))(this, a1);
		}

		::System::Void Write_16(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE_16_OFFSET))(this, a1);
		}

		::System::Void Write7BitEncodedInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_BINARYWRITER_WRITE7BITENCODEDINT_OFFSET))(this, a1);
		}
	};
}
