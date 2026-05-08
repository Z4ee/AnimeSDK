#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace miHoYoEmotion { class StopShapeData; }

#define MIHOYOEMOTION_STOPSHAPEDATA_STOPSHAPEDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x197A0B60)
#define MIHOYOEMOTION_STOPSHAPEDATA_STOPSHAPEDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x197A0B70)
#define MIHOYOEMOTION_STOPSHAPEDATA_STOPSHAPEDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x197A0CA0)
#define MIHOYOEMOTION_STOPSHAPEDATA_STOPSHAPEDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x197A0DE0)
#define MIHOYOEMOTION_STOPSHAPEDATA_STOPSHAPEDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x197A0DA0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int StopShapeData_StopShapeData_UnityGeneratedFormatter_TypeDefinitionIndex = 37774;

	class StopShapeData_StopShapeData_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::miHoYoEmotion::StopShapeData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::miHoYoEmotion::BlendShapeData>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::miHoYoEmotion::BlendShapeData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(StopShapeData_StopShapeData_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x29320);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_STOPSHAPEDATA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_STOPSHAPEDATA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_STOPSHAPEDATA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::miHoYoEmotion::StopShapeData*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::StopShapeData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_STOPSHAPEDATA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::miHoYoEmotion::StopShapeData*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::StopShapeData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_STOPSHAPEDATA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
