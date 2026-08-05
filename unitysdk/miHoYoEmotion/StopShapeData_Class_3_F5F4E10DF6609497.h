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

#define MIHOYOEMOTION_STOPSHAPEDATA_CLASS_3_F5F4E10DF6609497_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0504F0)
#define MIHOYOEMOTION_STOPSHAPEDATA_CLASS_3_F5F4E10DF6609497_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1D050500)
#define MIHOYOEMOTION_STOPSHAPEDATA_CLASS_3_F5F4E10DF6609497_WRITE_OFFSET UNITYSDK_OFFSET(0x1D0505D0)
#define MIHOYOEMOTION_STOPSHAPEDATA_CLASS_3_F5F4E10DF6609497__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0506C0)
#define MIHOYOEMOTION_STOPSHAPEDATA_CLASS_3_F5F4E10DF6609497__CTOR_OFFSET UNITYSDK_OFFSET(0x1D050680)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int StopShapeData_Class_3_F5F4E10DF6609497_TypeDefinitionIndex = 40069;

	class StopShapeData_Class_3_F5F4E10DF6609497 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::miHoYoEmotion::StopShapeData*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::miHoYoEmotion::BlendShapeData>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::miHoYoEmotion::BlendShapeData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(StopShapeData_Class_3_F5F4E10DF6609497_TypeDefinitionIndex)->GetStaticField(0x2C910);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_CLASS_3_F5F4E10DF6609497__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_CLASS_3_F5F4E10DF6609497__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_CLASS_3_F5F4E10DF6609497_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::miHoYoEmotion::StopShapeData*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::StopShapeData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_CLASS_3_F5F4E10DF6609497_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::miHoYoEmotion::StopShapeData*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::StopShapeData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_CLASS_3_F5F4E10DF6609497_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
