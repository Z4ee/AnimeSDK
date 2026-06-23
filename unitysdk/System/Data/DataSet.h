#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/MarshalByValueComponent.h"
#include "unitysdk/System/Data/MissingSchemaAction.h"
#include "unitysdk/System/Data/SchemaFormat.h"
#include "unitysdk/System/Data/SchemaSerializationMode.h"
#include "unitysdk/System/Data/SerializationFormat.h"
#include "unitysdk/System/Data/XmlReadMode.h"
#include "unitysdk/System/Data/XmlWriteMode.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System::Collections { class IList; }
namespace System::ComponentModel { class ISite; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }
namespace System::ComponentModel { class PropertyDescriptor; }
namespace System::Data { class DataRelationCollection; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataRowCreatedEventHandler; }
namespace System::Data { class DataSetClearEventhandler; }
namespace System::Data { class DataTable; }
namespace System::Data { class DataTableCollection; }
namespace System::Data { class DataViewManager; }
namespace System::Data { class MergeFailedEventArgs; }
namespace System::Data { class MergeFailedEventHandler; }
namespace System::Data { class PropertyCollection; }
namespace System::Globalization { class CultureInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_DATASET_ADD_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B997A50)
#define SYSTEM_DATA_DATASET_BEGININIT_OFFSET UNITYSDK_OFFSET(0x1B997B50)
#define SYSTEM_DATA_DATASET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B997E60)
#define SYSTEM_DATA_DATASET_CLONE_OFFSET UNITYSDK_OFFSET(0x1B998060)
#define SYSTEM_DATA_DATASET_DESERIALIZEDATASETDATA_OFFSET UNITYSDK_OFFSET(0x1B992940)
#define SYSTEM_DATA_DATASET_DESERIALIZEDATASETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B992BB0)
#define SYSTEM_DATA_DATASET_DESERIALIZEDATASETSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B992400)
#define SYSTEM_DATA_DATASET_DESERIALIZEDATASET_OFFSET UNITYSDK_OFFSET(0x1B990A10)
#define SYSTEM_DATA_DATASET_DESERIALIZERELATIONS_OFFSET UNITYSDK_OFFSET(0x1B992DC0)
#define SYSTEM_DATA_DATASET_ENABLECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B9950C0)
#define SYSTEM_DATA_DATASET_ENDINIT_OFFSET UNITYSDK_OFFSET(0x1B997B60)
#define SYSTEM_DATA_DATASET_ESTIMATEDXMLSTRINGSIZE_OFFSET UNITYSDK_OFFSET(0x1B991F50)
#define SYSTEM_DATA_DATASET_FAILEDENABLECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B9945B0)
#define SYSTEM_DATA_DATASET_FINDTABLE_OFFSET UNITYSDK_OFFSET(0x1B9A35B0)
#define SYSTEM_DATA_DATASET_GETDATASETSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B9A39C0)
#define SYSTEM_DATA_DATASET_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B990A70)
#define SYSTEM_DATA_DATASET_GETREMOTINGDIFFGRAM_OFFSET UNITYSDK_OFFSET(0x1B999B60)
#define SYSTEM_DATA_DATASET_GETXMLSCHEMAFORREMOTING_OFFSET UNITYSDK_OFFSET(0x1B991E20)
#define SYSTEM_DATA_DATASET_GET_DEFAULTVIEWMANAGER_OFFSET UNITYSDK_OFFSET(0x1B994FA0)
#define SYSTEM_DATA_DATASET_GET_EXTENDEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B994500)
#define SYSTEM_DATA_DATASET_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B996310)
#define SYSTEM_DATA_DATASET_GET_SITE_OFFSET UNITYSDK_OFFSET(0x1B9978B0)
#define SYSTEM_DATA_DATASET_INFERSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B99A350)
#define SYSTEM_DATA_DATASET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1B9A04F0)
#define SYSTEM_DATA_DATASET_MERGE_1_OFFSET UNITYSDK_OFFSET(0x1B9A2A90)
#define SYSTEM_DATA_DATASET_MERGE_OFFSET UNITYSDK_OFFSET(0x1B9A0840)
#define SYSTEM_DATA_DATASET_MOVETOELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1B99A730)
#define SYSTEM_DATA_DATASET_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1B99A230)
#define SYSTEM_DATA_DATASET_ONCLEARFUNCTIONCALLED_OFFSET UNITYSDK_OFFSET(0x1B998040)
#define SYSTEM_DATA_DATASET_ONDATAROWCREATED_OFFSET UNITYSDK_OFFSET(0x1B9A2E60)
#define SYSTEM_DATA_DATASET_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B997DE0)
#define SYSTEM_DATA_DATASET_ONMERGEFAILED_OFFSET UNITYSDK_OFFSET(0x1B9A2CB0)
#define SYSTEM_DATA_DATASET_ONPROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x1B9A2C90)
#define SYSTEM_DATA_DATASET_ONREMOVEDTABLE_OFFSET UNITYSDK_OFFSET(0x1B9A2E80)
#define SYSTEM_DATA_DATASET_RAISEMERGEFAILED_OFFSET UNITYSDK_OFFSET(0x1B9A2D20)
#define SYSTEM_DATA_DATASET_RAISEPROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x1B995AA0)
#define SYSTEM_DATA_DATASET_READENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1B99A2C0)
#define SYSTEM_DATA_DATASET_READXDRSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B999C60)
#define SYSTEM_DATA_DATASET_READXMLDIFFGRAM_OFFSET UNITYSDK_OFFSET(0x1B99E9A0)
#define SYSTEM_DATA_DATASET_READXMLSCHEMA_1_OFFSET UNITYSDK_OFFSET(0x1B993B50)
#define SYSTEM_DATA_DATASET_READXMLSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B999C50)
#define SYSTEM_DATA_DATASET_READXMLSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1B9A36D0)
#define SYSTEM_DATA_DATASET_READXML_1_OFFSET UNITYSDK_OFFSET(0x1B99D6B0)
#define SYSTEM_DATA_DATASET_READXML_2_OFFSET UNITYSDK_OFFSET(0x1B9944F0)
#define SYSTEM_DATA_DATASET_READXML_3_OFFSET UNITYSDK_OFFSET(0x1B9A09B0)
#define SYSTEM_DATA_DATASET_READXML_OFFSET UNITYSDK_OFFSET(0x1B99D6A0)
#define SYSTEM_DATA_DATASET_READXSDSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B999E50)
#define SYSTEM_DATA_DATASET_REMOVE_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1B997AD0)
#define SYSTEM_DATA_DATASET_RESET_OFFSET UNITYSDK_OFFSET(0x1B9A3160)
#define SYSTEM_DATA_DATASET_SERIALIZEDATASETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B9912C0)
#define SYSTEM_DATA_DATASET_SERIALIZEDATASET_OFFSET UNITYSDK_OFFSET(0x1B990AA0)
#define SYSTEM_DATA_DATASET_SERIALIZERELATIONS_OFFSET UNITYSDK_OFFSET(0x1B991670)
#define SYSTEM_DATA_DATASET_SETLOCALEVALUE_OFFSET UNITYSDK_OFFSET(0x1B9964E0)
#define SYSTEM_DATA_DATASET_SET_CASESENSITIVE_OFFSET UNITYSDK_OFFSET(0x1B994760)
#define SYSTEM_DATA_DATASET_SET_DATASETNAME_OFFSET UNITYSDK_OFFSET(0x1B9903E0)
#define SYSTEM_DATA_DATASET_SET_ENFORCECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B994600)
#define SYSTEM_DATA_DATASET_SET_LOCALE_OFFSET UNITYSDK_OFFSET(0x1B996320)
#define SYSTEM_DATA_DATASET_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1B995B40)
#define SYSTEM_DATA_DATASET_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1B9960A0)
#define SYSTEM_DATA_DATASET_SET_REMOTINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1B9905E0)
#define SYSTEM_DATA_DATASET_SET_SITE_OFFSET UNITYSDK_OFFSET(0x1B9978C0)
#define SYSTEM_DATA_DATASET_SYSTEM_COMPONENTMODEL_ILISTSOURCE_GETLIST_OFFSET UNITYSDK_OFFSET(0x1B999B50)
#define SYSTEM_DATA_DATASET_SYSTEM_COMPONENTMODEL_ILISTSOURCE_GET_CONTAINSLISTCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1B994F90)
#define SYSTEM_DATA_DATASET_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B9A3F60)
#define SYSTEM_DATA_DATASET_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x1B9A41D0)
#define SYSTEM_DATA_DATASET_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x1B9A44E0)
#define SYSTEM_DATA_DATASET_TOPLEVELTABLES_1_OFFSET UNITYSDK_OFFSET(0x1B9A2EE0)
#define SYSTEM_DATA_DATASET_TOPLEVELTABLES_OFFSET UNITYSDK_OFFSET(0x1B9A2ED0)
#define SYSTEM_DATA_DATASET_VALIDATECASECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1B994A90)
#define SYSTEM_DATA_DATASET_VALIDATELOCALECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1B997360)
#define SYSTEM_DATA_DATASET_WRITEXMLSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B99D4E0)
#define SYSTEM_DATA_DATASET_WRITEXML_OFFSET UNITYSDK_OFFSET(0x1B992230)
#define SYSTEM_DATA_DATASET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B9903B0)
#define SYSTEM_DATA_DATASET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B990710)
#define SYSTEM_DATA_DATASET__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B990730)
#define SYSTEM_DATA_DATASET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9901D0)

namespace System::Data
{
	inline static constexpr unsigned int DataSet_TypeDefinitionIndex = 38604;

	class DataSet : public ::System::ComponentModel::MarshalByValueComponent
	{
	public:
		static ::System::Xml::Schema::XmlSchemaComplexType** StaticGet_s_schemaTypeForWSDL()
		{
			return (::System::Xml::Schema::XmlSchemaComplexType**)Il2CppClass::FromTypeDefinitionIndex(DataSet_TypeDefinitionIndex)->GetStaticField(0x29270);
		}
		static ::System::Int32* StaticGet_s_objectTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DataSet_TypeDefinitionIndex)->GetStaticField(0x92D0);
		}
		::System::Data::DataViewManager* _defaultViewManager; // 0x20
		::System::Data::DataTableCollection* _tableCollection; // 0x28
		::System::Data::DataRelationCollection* _relationCollection; // 0x30
		::System::Data::PropertyCollection* _extendedProperties; // 0x38
		::System::String* _dataSetName; // 0x40
		::System::String* _datasetPrefix; // 0x48
		::System::String* _namespaceURI; // 0x50
		::System::Boolean _enforceConstraints; // 0x58
		::System::Boolean _caseSensitive; // 0x59
		::System::Globalization::CultureInfo* _culture; // 0x60
		::System::Boolean _cultureUserSet; // 0x68
		::System::Boolean _fInReadXml; // 0x69
		::System::Boolean _fInLoadDiffgram; // 0x6A
		::System::Boolean _fTopLevelTable; // 0x6B
		::System::Boolean _fInitInProgress; // 0x6C
		::System::Boolean _fEnableCascading; // 0x6D
		::System::Boolean _fIsSchemaLoading; // 0x6E
		::System::Boolean _fBoundToDocument; // 0x6F
		::System::String* _mainTableName; // 0x70
		::System::Data::SerializationFormat _remotingFormat; // 0x78
		::System::Object* _defaultViewManagerLock; // 0x80
		::System::Int32 _objectID; // 0x88
		::System::Boolean _useDataSetSchemaOnly; // 0x8C
		::System::Boolean _udtIsWrapped; // 0x8D
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanging; // 0x90
		::System::Data::MergeFailedEventHandler* MergeFailed; // 0x98
		::System::Data::DataRowCreatedEventHandler* DataRowCreated; // 0xA0
		::System::Data::DataSetClearEventhandler* ClearFunctionCalled; // 0xA8
		::System::EventHandler* Initialized; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* dataSetName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET__CTOR_1_OFFSET))(this, dataSetName);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Boolean ConstructSchema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET__CTOR_3_OFFSET))(this, info, context, ConstructSchema);
		}

		::System::Void set_RemotingFormat(::System::Data::SerializationFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::SerializationFormat))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SET_REMOTINGFORMAT_OFFSET))(this, value);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void SerializeDataSet(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Data::SerializationFormat remotingFormat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Data::SerializationFormat))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SERIALIZEDATASET_OFFSET))(this, info, context, remotingFormat);
		}

		::System::Void DeserializeDataSet(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Data::SerializationFormat remotingFormat, ::System::Data::SchemaSerializationMode schemaSerializationMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Data::SerializationFormat, ::System::Data::SchemaSerializationMode))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_DESERIALIZEDATASET_OFFSET))(this, info, context, remotingFormat, schemaSerializationMode);
		}

		::System::Void DeserializeDataSetSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Data::SerializationFormat remotingFormat, ::System::Data::SchemaSerializationMode schemaSerializationMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Data::SerializationFormat, ::System::Data::SchemaSerializationMode))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_DESERIALIZEDATASETSCHEMA_OFFSET))(this, info, context, remotingFormat, schemaSerializationMode);
		}

		::System::Void DeserializeDataSetData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Data::SerializationFormat remotingFormat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Data::SerializationFormat))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_DESERIALIZEDATASETDATA_OFFSET))(this, info, context, remotingFormat);
		}

		::System::Void SerializeDataSetProperties(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SERIALIZEDATASETPROPERTIES_OFFSET))(this, info, context);
		}

		::System::Void DeserializeDataSetProperties(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_DESERIALIZEDATASETPROPERTIES_OFFSET))(this, info, context);
		}

		::System::Void SerializeRelations(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SERIALIZERELATIONS_OFFSET))(this, info, context);
		}

		::System::Void DeserializeRelations(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_DESERIALIZERELATIONS_OFFSET))(this, info, context);
		}

		::System::Void FailedEnableConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_FAILEDENABLECONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_CaseSensitive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SET_CASESENSITIVE_OFFSET))(this, value);
		}

		::System::Boolean System_ComponentModel_IListSource_get_ContainsListCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SYSTEM_COMPONENTMODEL_ILISTSOURCE_GET_CONTAINSLISTCOLLECTION_OFFSET))(this);
		}

		::System::Data::DataViewManager* get_DefaultViewManager()
		{
			return ((::System::Data::DataViewManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_GET_DEFAULTVIEWMANAGER_OFFSET))(this);
		}

		::System::Void set_EnforceConstraints(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SET_ENFORCECONSTRAINTS_OFFSET))(this, value);
		}

		::System::Void EnableConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ENABLECONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_DataSetName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SET_DATASETNAME_OFFSET))(this, value);
		}

		::System::Void set_Namespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SET_NAMESPACE_OFFSET))(this, value);
		}

		::System::Void set_Prefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SET_PREFIX_OFFSET))(this, value);
		}

		::System::Data::PropertyCollection* get_ExtendedProperties()
		{
			return ((::System::Data::PropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_GET_EXTENDEDPROPERTIES_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_Locale(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SET_LOCALE_OFFSET))(this, value);
		}

		::System::Void SetLocaleValue(::System::Globalization::CultureInfo* value, ::System::Boolean userSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SETLOCALEVALUE_OFFSET))(this, value, userSet);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_GET_SITE_OFFSET))(this);
		}

		::System::Void set_Site(::System::ComponentModel::ISite* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ISite*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SET_SITE_OFFSET))(this, value);
		}

		::System::Void add_Initialized(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ADD_INITIALIZED_OFFSET))(this, value);
		}

		::System::Void remove_Initialized(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_REMOVE_INITIALIZED_OFFSET))(this, value);
		}

		::System::Void BeginInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_BEGININIT_OFFSET))(this);
		}

		::System::Void EndInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ENDINIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_CLEAR_OFFSET))(this);
		}

		::System::Data::DataSet* Clone()
		{
			return ((::System::Data::DataSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_CLONE_OFFSET))(this);
		}

		::System::Int32 EstimatedXmlStringSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ESTIMATEDXMLSTRINGSIZE_OFFSET))(this);
		}

		::System::Collections::IList* System_ComponentModel_IListSource_GetList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SYSTEM_COMPONENTMODEL_ILISTSOURCE_GETLIST_OFFSET))(this);
		}

		::System::String* GetRemotingDiffGram(::System::Data::DataTable* table)
		{
			return ((::System::String*(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_GETREMOTINGDIFFGRAM_OFFSET))(this, table);
		}

		::System::String* GetXmlSchemaForRemoting(::System::Data::DataTable* table)
		{
			return ((::System::String*(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_GETXMLSCHEMAFORREMOTING_OFFSET))(this, table);
		}

		::System::Void ReadXmlSchema(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READXMLSCHEMA_OFFSET))(this, reader);
		}

		::System::Void ReadXmlSchema_1(::System::Xml::XmlReader* reader, ::System::Boolean denyResolving)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READXMLSCHEMA_1_OFFSET))(this, reader, denyResolving);
		}

		::System::Boolean MoveToElement(::System::Xml::XmlReader* reader, ::System::Int32 depth)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_MOVETOELEMENT_OFFSET))(this, reader, depth);
		}

		static ::System::Void MoveToElement_1(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_MOVETOELEMENT_1_OFFSET))(reader);
		}

		::System::Void ReadEndElement(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READENDELEMENT_OFFSET))(this, reader);
		}

		::System::Void ReadXSDSchema(::System::Xml::XmlReader* reader, ::System::Boolean denyResolving)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READXSDSCHEMA_OFFSET))(this, reader, denyResolving);
		}

		::System::Void ReadXDRSchema(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READXDRSCHEMA_OFFSET))(this, reader);
		}

		::System::Void WriteXmlSchema(::System::Xml::XmlWriter* writer, ::System::Data::SchemaFormat schemaFormat, ::System::Converter_2<::System::Type*, ::System::String*>* multipleTargetConverter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Data::SchemaFormat, ::System::Converter_2<::System::Type*, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_WRITEXMLSCHEMA_OFFSET))(this, writer, schemaFormat, multipleTargetConverter);
		}

		::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Data::XmlReadMode(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READXML_OFFSET))(this, reader);
		}

		::System::Data::XmlReadMode ReadXml_1(::System::Xml::XmlReader* reader, ::System::Boolean denyResolving)
		{
			return ((::System::Data::XmlReadMode(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READXML_1_OFFSET))(this, reader, denyResolving);
		}

		::System::Void InferSchema(::System::Xml::XmlDocument* xdoc, ::Il2CppArray<::System::String*>* excludedNamespaces, ::System::Data::XmlReadMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*, ::Il2CppArray<::System::String*>*, ::System::Data::XmlReadMode))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_INFERSCHEMA_OFFSET))(this, xdoc, excludedNamespaces, mode);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ISEMPTY_OFFSET))(this);
		}

		::System::Void ReadXmlDiffgram(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READXMLDIFFGRAM_OFFSET))(this, reader);
		}

		::System::Data::XmlReadMode ReadXml_2(::System::Xml::XmlReader* reader, ::System::Data::XmlReadMode mode)
		{
			return ((::System::Data::XmlReadMode(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Data::XmlReadMode))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READXML_2_OFFSET))(this, reader, mode);
		}

		::System::Data::XmlReadMode ReadXml_3(::System::Xml::XmlReader* reader, ::System::Data::XmlReadMode mode, ::System::Boolean denyResolving)
		{
			return ((::System::Data::XmlReadMode(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Data::XmlReadMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READXML_3_OFFSET))(this, reader, mode, denyResolving);
		}

		::System::Void WriteXml(::System::Xml::XmlWriter* writer, ::System::Data::XmlWriteMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Data::XmlWriteMode))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_WRITEXML_OFFSET))(this, writer, mode);
		}

		::System::Void Merge(::System::Data::DataSet* dataSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_MERGE_OFFSET))(this, dataSet);
		}

		::System::Void Merge_1(::System::Data::DataSet* dataSet, ::System::Boolean preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Boolean, ::System::Data::MissingSchemaAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_MERGE_1_OFFSET))(this, dataSet, preserveChanges, missingSchemaAction);
		}

		::System::Void OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ONPROPERTYCHANGING_OFFSET))(this, pcevent);
		}

		::System::Void OnMergeFailed(::System::Data::MergeFailedEventArgs* mfevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::MergeFailedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ONMERGEFAILED_OFFSET))(this, mfevent);
		}

		::System::Void RaiseMergeFailed(::System::Data::DataTable* table, ::System::String* conflict, ::System::Data::MissingSchemaAction missingSchemaAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::String*, ::System::Data::MissingSchemaAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_RAISEMERGEFAILED_OFFSET))(this, table, conflict, missingSchemaAction);
		}

		::System::Void OnDataRowCreated(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ONDATAROWCREATED_OFFSET))(this, row);
		}

		::System::Void OnClearFunctionCalled(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ONCLEARFUNCTIONCALLED_OFFSET))(this, table);
		}

		::System::Void OnInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ONINITIALIZED_OFFSET))(this);
		}

		::System::Void OnRemovedTable(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_ONREMOVEDTABLE_OFFSET))(this, table);
		}

		::System::Void RaisePropertyChanging(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_RAISEPROPERTYCHANGING_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Data::DataTable*>* TopLevelTables()
		{
			return ((::Il2CppArray<::System::Data::DataTable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_TOPLEVELTABLES_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataTable*>* TopLevelTables_1(::System::Boolean forSchema)
		{
			return ((::Il2CppArray<::System::Data::DataTable*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_TOPLEVELTABLES_1_OFFSET))(this, forSchema);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_RESET_OFFSET))(this);
		}

		::System::Boolean ValidateCaseConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_VALIDATECASECONSTRAINT_OFFSET))(this);
		}

		::System::Boolean ValidateLocaleConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_VALIDATELOCALECONSTRAINT_OFFSET))(this);
		}

		::System::Data::DataTable* FindTable(::System::Data::DataTable* baseTable, ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>* props, ::System::Int32 propStart)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Data::DataTable*, ::Il2CppArray<::System::ComponentModel::PropertyDescriptor*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_FINDTABLE_OFFSET))(this, baseTable, props, propStart);
		}

		::System::Void ReadXmlSerializable(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_READXMLSERIALIZABLE_OFFSET))(this, reader);
		}

		static ::System::Xml::Schema::XmlSchemaComplexType* GetDataSetSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::Schema::XmlSchemaComplexType*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_GETDATASETSCHEMA_OFFSET))(schemaSet);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASET_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}
	};
}
