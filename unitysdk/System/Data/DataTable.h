#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/MarshalByValueComponent.h"
#include "unitysdk/System/Data/DataKey.h"
#include "unitysdk/System/Data/DataRowAction.h"
#include "unitysdk/System/Data/DataRowState.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Data/DataViewRowState.h"
#include "unitysdk/System/Data/IndexField.h"
#include "unitysdk/System/Data/MissingSchemaAction.h"
#include "unitysdk/System/Data/SerializationFormat.h"
#include "unitysdk/System/Data/XmlReadMode.h"
#include "unitysdk/System/Data/XmlWriteMode.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Attribute; }
namespace System { class EventHandler; }
namespace System { class Exception; }
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class StringComparer; }
namespace System { class Type; }
namespace System::Collections { class BitArray; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class ISite; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }
namespace System::ComponentModel { class PropertyDescriptorCollection; }
namespace System::Data { class ConstraintCollection; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataColumnChangeEventArgs; }
namespace System::Data { class DataColumnChangeEventHandler; }
namespace System::Data { class DataColumnCollection; }
namespace System::Data { class DataExpression; }
namespace System::Data { class DataRelation; }
namespace System::Data { class DataRelationCollection; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataRowBuilder; }
namespace System::Data { class DataRowChangeEventArgs; }
namespace System::Data { class DataRowChangeEventHandler; }
namespace System::Data { class DataRowCollection; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTableClearEventArgs; }
namespace System::Data { class DataTableClearEventHandler; }
namespace System::Data { class DataTableNewRowEventArgs; }
namespace System::Data { class DataTableNewRowEventHandler; }
namespace System::Data { class DataView; }
namespace System::Data { class DataViewListener; }
namespace System::Data { class IFilter; }
namespace System::Data { class Index; }
namespace System::Data { class PropertyCollection; }
namespace System::Data { class RecordManager; }
namespace System::Data { class UniqueConstraint; }
namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class CultureInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Threading { class ReaderWriterLockSlim; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_DATATABLE_ADDDEPENDENTCOLUMN_OFFSET UNITYSDK_OFFSET(0x1CD545A0)
#define SYSTEM_DATA_DATATABLE_ADDFOREIGNKEY_OFFSET UNITYSDK_OFFSET(0x1CD4E540)
#define SYSTEM_DATA_DATATABLE_ADDROW_OFFSET UNITYSDK_OFFSET(0x1CD46C60)
#define SYSTEM_DATA_DATATABLE_ADDUNIQUEKEY_1_OFFSET UNITYSDK_OFFSET(0x1CD4E530)
#define SYSTEM_DATA_DATATABLE_ADDUNIQUEKEY_OFFSET UNITYSDK_OFFSET(0x1CD4E260)
#define SYSTEM_DATA_DATATABLE_ADD_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CD469C0)
#define SYSTEM_DATA_DATATABLE_BEGININIT_OFFSET UNITYSDK_OFFSET(0x1CD44310)
#define SYSTEM_DATA_DATATABLE_CACHENESTEDPARENT_OFFSET UNITYSDK_OFFSET(0x1CD41500)
#define SYSTEM_DATA_DATATABLE_CASCADEALL_OFFSET UNITYSDK_OFFSET(0x1CD48760)
#define SYSTEM_DATA_DATATABLE_CHECKCASCADINGNAMESPACECONFLICT_OFFSET UNITYSDK_OFFSET(0x1CD42DA0)
#define SYSTEM_DATA_DATATABLE_CHECKFORCLOSUREONEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1CD4F080)
#define SYSTEM_DATA_DATATABLE_CHECKFORCLOSUREONEXPRESSIONTABLES_OFFSET UNITYSDK_OFFSET(0x1CD3BFA0)
#define SYSTEM_DATA_DATATABLE_CHECKNAMESPACEVALIDITYFORNESTEDPARENTRELATIONS_OFFSET UNITYSDK_OFFSET(0x1CD43E80)
#define SYSTEM_DATA_DATATABLE_CHECKNAMESPACEVALIDITYFORNESTEDRELATIONS_OFFSET UNITYSDK_OFFSET(0x1CD431E0)
#define SYSTEM_DATA_DATATABLE_CHECKNOTMODIFYING_OFFSET UNITYSDK_OFFSET(0x1CD47BB0)
#define SYSTEM_DATA_DATATABLE_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1CD47BF0)
#define SYSTEM_DATA_DATATABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CD47BE0)
#define SYSTEM_DATA_DATATABLE_CLONEHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1CD463C0)
#define SYSTEM_DATA_DATATABLE_CLONETO_OFFSET UNITYSDK_OFFSET(0x1CD3A770)
#define SYSTEM_DATA_DATATABLE_CLONE_1_OFFSET UNITYSDK_OFFSET(0x1CD45E40)
#define SYSTEM_DATA_DATATABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD45E30)
#define SYSTEM_DATA_DATATABLE_COMMITROW_OFFSET UNITYSDK_OFFSET(0x1CD488B0)
#define SYSTEM_DATA_DATATABLE_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1CD48BB0)
#define SYSTEM_DATA_DATATABLE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CD48BA0)
#define SYSTEM_DATA_DATATABLE_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1CD48FE0)
#define SYSTEM_DATA_DATATABLE_CONVERTTOROWERROR_OFFSET UNITYSDK_OFFSET(0x1CD3F450)
#define SYSTEM_DATA_DATATABLE_CONVERTTOROWSTATE_OFFSET UNITYSDK_OFFSET(0x1CD3F3B0)
#define SYSTEM_DATA_DATATABLE_CREATEEMPTYROW_OFFSET UNITYSDK_OFFSET(0x1CD4AEE0)
#define SYSTEM_DATA_DATATABLE_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CD45DB0)
#define SYSTEM_DATA_DATATABLE_CREATERELATIONLIST_OFFSET UNITYSDK_OFFSET(0x1CD534F0)
#define SYSTEM_DATA_DATATABLE_CREATETABLELIST_OFFSET UNITYSDK_OFFSET(0x1CD4F140)
#define SYSTEM_DATA_DATATABLE_DELETEROW_OFFSET UNITYSDK_OFFSET(0x1CD491F0)
#define SYSTEM_DATA_DATATABLE_DESERIALIZECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1CD3DA00)
#define SYSTEM_DATA_DATATABLE_DESERIALIZEDATATABLE_OFFSET UNITYSDK_OFFSET(0x1CD35AD0)
#define SYSTEM_DATA_DATATABLE_DESERIALIZEEXPRESSIONCOLUMNS_OFFSET UNITYSDK_OFFSET(0x1CD3EE50)
#define SYSTEM_DATA_DATATABLE_DESERIALIZETABLEDATA_OFFSET UNITYSDK_OFFSET(0x1CD39C80)
#define SYSTEM_DATA_DATATABLE_DESERIALIZETABLESCHEMA_OFFSET UNITYSDK_OFFSET(0x1CD38BD0)
#define SYSTEM_DATA_DATATABLE_DORAISENAMESPACECHANGE_OFFSET UNITYSDK_OFFSET(0x1CD43670)
#define SYSTEM_DATA_DATATABLE_ENABLECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1CD40670)
#define SYSTEM_DATA_DATATABLE_ENDINIT_OFFSET UNITYSDK_OFFSET(0x1CD44320)
#define SYSTEM_DATA_DATATABLE_EVALUATEDEPENDENTEXPRESSIONS_1_OFFSET UNITYSDK_OFFSET(0x1CD4CA40)
#define SYSTEM_DATA_DATATABLE_EVALUATEDEPENDENTEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1CD48660)
#define SYSTEM_DATA_DATATABLE_EVALUATEEXPRESSIONS_1_OFFSET UNITYSDK_OFFSET(0x1CD4A0F0)
#define SYSTEM_DATA_DATATABLE_EVALUATEEXPRESSIONS_2_OFFSET UNITYSDK_OFFSET(0x1CD54A60)
#define SYSTEM_DATA_DATATABLE_EVALUATEEXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x1CD54700)
#define SYSTEM_DATA_DATATABLE_FINDBYINDEX_OFFSET UNITYSDK_OFFSET(0x1CD44C70)
#define SYSTEM_DATA_DATATABLE_FINDMERGETARGET_OFFSET UNITYSDK_OFFSET(0x1CD44D40)
#define SYSTEM_DATA_DATATABLE_FINDNESTEDPARENTRELATIONS_OFFSET UNITYSDK_OFFSET(0x1CD41520)
#define SYSTEM_DATA_DATATABLE_FORMATSORTSTRING_OFFSET UNITYSDK_OFFSET(0x1CD492C0)
#define SYSTEM_DATA_DATATABLE_FREERECORD_OFFSET UNITYSDK_OFFSET(0x1CD49420)
#define SYSTEM_DATA_DATATABLE_GETDATATABLESCHEMA_OFFSET UNITYSDK_OFFSET(0x1CD53AB0)
#define SYSTEM_DATA_DATATABLE_GETINDEX_1_OFFSET UNITYSDK_OFFSET(0x1CD497B0)
#define SYSTEM_DATA_DATATABLE_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1CD49440)
#define SYSTEM_DATA_DATATABLE_GETINHERITEDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1CD42B10)
#define SYSTEM_DATA_DATATABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1CD35FC0)
#define SYSTEM_DATA_DATATABLE_GETPROPERTYDESCRIPTORCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1CD4E5F0)
#define SYSTEM_DATA_DATATABLE_GETROWANDCOLUMNERRORS_OFFSET UNITYSDK_OFFSET(0x1CD3F040)
#define SYSTEM_DATA_DATATABLE_GETROWTYPE_OFFSET UNITYSDK_OFFSET(0x1CD4B390)
#define SYSTEM_DATA_DATATABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x1CD54020)
#define SYSTEM_DATA_DATATABLE_GETSPECIALHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD412C0)
#define SYSTEM_DATA_DATATABLE_GET_AREINDEXEVENTSSUSPENDED_OFFSET UNITYSDK_OFFSET(0x1CD3F840)
#define SYSTEM_DATA_DATATABLE_GET_CHILDRELATIONS_OFFSET UNITYSDK_OFFSET(0x1CD40330)
#define SYSTEM_DATA_DATATABLE_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1CD403A0)
#define SYSTEM_DATA_DATATABLE_GET_COMPAREINFO_OFFSET UNITYSDK_OFFSET(0x1CD403B0)
#define SYSTEM_DATA_DATATABLE_GET_DEFAULTVIEW_OFFSET UNITYSDK_OFFSET(0x1CD404D0)
#define SYSTEM_DATA_DATATABLE_GET_DISPLAYEXPRESSIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD405A0)
#define SYSTEM_DATA_DATATABLE_GET_ENCODEDTABLENAME_OFFSET UNITYSDK_OFFSET(0x1CD42A50)
#define SYSTEM_DATA_DATATABLE_GET_ENFORCECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1CD40600)
#define SYSTEM_DATA_DATATABLE_GET_EXTENDEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CD3BEF0)
#define SYSTEM_DATA_DATATABLE_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x1CD40DA0)
#define SYSTEM_DATA_DATATABLE_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CD3FD20)
#define SYSTEM_DATA_DATATABLE_GET_ISTYPEDDATATABLE_OFFSET UNITYSDK_OFFSET(0x1CD3FD30)
#define SYSTEM_DATA_DATATABLE_GET_LIVEINDEXES_OFFSET UNITYSDK_OFFSET(0x1CD401F0)
#define SYSTEM_DATA_DATATABLE_GET_MINIMUMCAPACITY_OFFSET UNITYSDK_OFFSET(0x1CD41450)
#define SYSTEM_DATA_DATATABLE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1CD38B30)
#define SYSTEM_DATA_DATATABLE_GET_NEEDCOLUMNCHANGEEVENTS_OFFSET UNITYSDK_OFFSET(0x1CD4B630)
#define SYSTEM_DATA_DATATABLE_GET_NESTEDPARENTRELATIONS_OFFSET UNITYSDK_OFFSET(0x1CD414F0)
#define SYSTEM_DATA_DATATABLE_GET_NESTEDPARENTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1CD419A0)
#define SYSTEM_DATA_DATATABLE_GET_PARENTRELATIONS_OFFSET UNITYSDK_OFFSET(0x1CD40180)
#define SYSTEM_DATA_DATATABLE_GET_PRIMARYKEY_OFFSET UNITYSDK_OFFSET(0x1CD41D00)
#define SYSTEM_DATA_DATATABLE_GET_RECORDCAPACITY_OFFSET UNITYSDK_OFFSET(0x1CD41470)
#define SYSTEM_DATA_DATATABLE_GET_ROWDIFFID_OFFSET UNITYSDK_OFFSET(0x1CD544F0)
#define SYSTEM_DATA_DATATABLE_GET_ROWS_OFFSET UNITYSDK_OFFSET(0x1CD42200)
#define SYSTEM_DATA_DATATABLE_GET_SELFNESTED_OFFSET UNITYSDK_OFFSET(0x1CD3FDA0)
#define SYSTEM_DATA_DATATABLE_GET_SITE_OFFSET UNITYSDK_OFFSET(0x1CD46AC0)
#define SYSTEM_DATA_DATATABLE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1CD3BE50)
#define SYSTEM_DATA_DATATABLE_INCREMENTALCLONETO_OFFSET UNITYSDK_OFFSET(0x1CD46050)
#define SYSTEM_DATA_DATATABLE_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1CD48EE0)
#define SYSTEM_DATA_DATATABLE_INSERTRECORDTOINDEXES_OFFSET UNITYSDK_OFFSET(0x1CD4C460)
#define SYSTEM_DATA_DATATABLE_INSERTROW_1_OFFSET UNITYSDK_OFFSET(0x1CD46CA0)
#define SYSTEM_DATA_DATATABLE_INSERTROW_2_OFFSET UNITYSDK_OFFSET(0x1CD459A0)
#define SYSTEM_DATA_DATATABLE_INSERTROW_OFFSET UNITYSDK_OFFSET(0x1CD46C80)
#define SYSTEM_DATA_DATATABLE_ISEMPTYXML_OFFSET UNITYSDK_OFFSET(0x1CD4F8D0)
#define SYSTEM_DATA_DATATABLE_ISNAMESPACEINHERITED_OFFSET UNITYSDK_OFFSET(0x1CD43E70)
#define SYSTEM_DATA_DATATABLE_ISSUFFIX_OFFSET UNITYSDK_OFFSET(0x1CD48F60)
#define SYSTEM_DATA_DATATABLE_MERGEROW_OFFSET UNITYSDK_OFFSET(0x1CD453D0)
#define SYSTEM_DATA_DATATABLE_MERGE_1_OFFSET UNITYSDK_OFFSET(0x1CD4EAC0)
#define SYSTEM_DATA_DATATABLE_MERGE_OFFSET UNITYSDK_OFFSET(0x1CD4EAB0)
#define SYSTEM_DATA_DATATABLE_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1CD531D0)
#define SYSTEM_DATA_DATATABLE_NEWEMPTYROW_OFFSET UNITYSDK_OFFSET(0x1CD3F350)
#define SYSTEM_DATA_DATATABLE_NEWRECORD_1_OFFSET UNITYSDK_OFFSET(0x1CD4A8B0)
#define SYSTEM_DATA_DATATABLE_NEWRECORD_OFFSET UNITYSDK_OFFSET(0x1CD4A8A0)
#define SYSTEM_DATA_DATATABLE_NEWROWARRAY_OFFSET UNITYSDK_OFFSET(0x1CD4B3C0)
#define SYSTEM_DATA_DATATABLE_NEWROWCREATED_OFFSET UNITYSDK_OFFSET(0x1CD4AE20)
#define SYSTEM_DATA_DATATABLE_NEWROWFROMBUILDER_OFFSET UNITYSDK_OFFSET(0x1CD4B2E0)
#define SYSTEM_DATA_DATATABLE_NEWROW_1_OFFSET UNITYSDK_OFFSET(0x1CD4AC70)
#define SYSTEM_DATA_DATATABLE_NEWROW_OFFSET UNITYSDK_OFFSET(0x1CD4AD00)
#define SYSTEM_DATA_DATATABLE_NEWUNINITIALIZEDRECORD_OFFSET UNITYSDK_OFFSET(0x1CD4AAC0)
#define SYSTEM_DATA_DATATABLE_NEWUNINITIALIZEDROW_OFFSET UNITYSDK_OFFSET(0x1CD4AB50)
#define SYSTEM_DATA_DATATABLE_ONCOLUMNCHANGED_OFFSET UNITYSDK_OFFSET(0x1CD4B780)
#define SYSTEM_DATA_DATATABLE_ONCOLUMNCHANGING_OFFSET UNITYSDK_OFFSET(0x1CD4B6C0)
#define SYSTEM_DATA_DATATABLE_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CD447F0)
#define SYSTEM_DATA_DATATABLE_ONPROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x1CD4B840)
#define SYSTEM_DATA_DATATABLE_ONREMOVECOLUMNINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CD4B900)
#define SYSTEM_DATA_DATATABLE_ONROWCHANGED_1_OFFSET UNITYSDK_OFFSET(0x1CD4B910)
#define SYSTEM_DATA_DATATABLE_ONROWCHANGED_OFFSET UNITYSDK_OFFSET(0x1CD48A60)
#define SYSTEM_DATA_DATATABLE_ONROWCHANGING_1_OFFSET UNITYSDK_OFFSET(0x1CD4B9D0)
#define SYSTEM_DATA_DATATABLE_ONROWCHANGING_OFFSET UNITYSDK_OFFSET(0x1CD48920)
#define SYSTEM_DATA_DATATABLE_ONROWDELETED_OFFSET UNITYSDK_OFFSET(0x1CD4BB50)
#define SYSTEM_DATA_DATATABLE_ONROWDELETING_OFFSET UNITYSDK_OFFSET(0x1CD4BA90)
#define SYSTEM_DATA_DATATABLE_ONTABLECLEARED_OFFSET UNITYSDK_OFFSET(0x1CD4BC10)
#define SYSTEM_DATA_DATATABLE_ONTABLECLEARING_OFFSET UNITYSDK_OFFSET(0x1CD4BCD0)
#define SYSTEM_DATA_DATATABLE_ONTABLENEWROW_OFFSET UNITYSDK_OFFSET(0x1CD4BD90)
#define SYSTEM_DATA_DATATABLE_PARSESORTSTRING_OFFSET UNITYSDK_OFFSET(0x1CD49470)
#define SYSTEM_DATA_DATATABLE_RAISEPROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x1CD429B0)
#define SYSTEM_DATA_DATATABLE_RAISEROWCHANGED_OFFSET UNITYSDK_OFFSET(0x1CD4A5E0)
#define SYSTEM_DATA_DATATABLE_RAISEROWCHANGING_1_OFFSET UNITYSDK_OFFSET(0x1CD49AB0)
#define SYSTEM_DATA_DATATABLE_RAISEROWCHANGING_OFFSET UNITYSDK_OFFSET(0x1CD4DE30)
#define SYSTEM_DATA_DATATABLE_READENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1CD51780)
#define SYSTEM_DATA_DATATABLE_READXDRSCHEMA_OFFSET UNITYSDK_OFFSET(0x1CD51810)
#define SYSTEM_DATA_DATATABLE_READXMLDIFFGRAM_OFFSET UNITYSDK_OFFSET(0x1CD50B70)
#define SYSTEM_DATA_DATATABLE_READXMLSCHEMA_OFFSET UNITYSDK_OFFSET(0x1CD51880)
#define SYSTEM_DATA_DATATABLE_READXMLSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1CD544E0)
#define SYSTEM_DATA_DATATABLE_READXML_OFFSET UNITYSDK_OFFSET(0x1CD4FB70)
#define SYSTEM_DATA_DATATABLE_READXSDSCHEMA_OFFSET UNITYSDK_OFFSET(0x1CD53260)
#define SYSTEM_DATA_DATATABLE_RECORDCHANGED_1_OFFSET UNITYSDK_OFFSET(0x1CD4BF90)
#define SYSTEM_DATA_DATATABLE_RECORDCHANGED_OFFSET UNITYSDK_OFFSET(0x1CD4BE50)
#define SYSTEM_DATA_DATATABLE_RECORDSTATECHANGED_1_OFFSET UNITYSDK_OFFSET(0x1CD49F20)
#define SYSTEM_DATA_DATATABLE_RECORDSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1CD49DC0)
#define SYSTEM_DATA_DATATABLE_REMOVEDEPENDENTCOLUMN_OFFSET UNITYSDK_OFFSET(0x1CD54680)
#define SYSTEM_DATA_DATATABLE_REMOVERECORDFROMINDEXES_OFFSET UNITYSDK_OFFSET(0x1CD4C180)
#define SYSTEM_DATA_DATATABLE_REMOVEROW_OFFSET UNITYSDK_OFFSET(0x1CD4D5D0)
#define SYSTEM_DATA_DATATABLE_REMOVE_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CD46A40)
#define SYSTEM_DATA_DATATABLE_RESETCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1CD40400)
#define SYSTEM_DATA_DATATABLE_RESETINDEXES_OFFSET UNITYSDK_OFFSET(0x1CD3A760)
#define SYSTEM_DATA_DATATABLE_RESETINTERNALINDEXES_OFFSET UNITYSDK_OFFSET(0x1CD4DBF0)
#define SYSTEM_DATA_DATATABLE_RESET_OFFSET UNITYSDK_OFFSET(0x1CD4D830)
#define SYSTEM_DATA_DATATABLE_RESTORECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1CD4F880)
#define SYSTEM_DATA_DATATABLE_RESTOREINDEXEVENTS_OFFSET UNITYSDK_OFFSET(0x1CD3F850)
#define SYSTEM_DATA_DATATABLE_RESTORESHADOWINDEXES_OFFSET UNITYSDK_OFFSET(0x1CD3FC50)
#define SYSTEM_DATA_DATATABLE_ROLLBACKROW_OFFSET UNITYSDK_OFFSET(0x1CD4DD70)
#define SYSTEM_DATA_DATATABLE_SELECT_OFFSET UNITYSDK_OFFSET(0x1CD49070)
#define SYSTEM_DATA_DATATABLE_SERIALIZECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1CD3C4F0)
#define SYSTEM_DATA_DATATABLE_SERIALIZEDATATABLE_OFFSET UNITYSDK_OFFSET(0x1CD36020)
#define SYSTEM_DATA_DATATABLE_SERIALIZEEXPRESSIONCOLUMNS_OFFSET UNITYSDK_OFFSET(0x1CD3EB70)
#define SYSTEM_DATA_DATATABLE_SERIALIZETABLEDATA_OFFSET UNITYSDK_OFFSET(0x1CD38040)
#define SYSTEM_DATA_DATATABLE_SERIALIZETABLESCHEMA_OFFSET UNITYSDK_OFFSET(0x1CD364B0)
#define SYSTEM_DATA_DATATABLE_SETCASESENSITIVEVALUE_OFFSET UNITYSDK_OFFSET(0x1CD3CEB0)
#define SYSTEM_DATA_DATATABLE_SETDATASET_OFFSET UNITYSDK_OFFSET(0x1CD40420)
#define SYSTEM_DATA_DATATABLE_SETKEYVALUES_OFFSET UNITYSDK_OFFSET(0x1CD44BD0)
#define SYSTEM_DATA_DATATABLE_SETLOCALEVALUE_OFFSET UNITYSDK_OFFSET(0x1CD3D240)
#define SYSTEM_DATA_DATATABLE_SETMERGERECORDS_OFFSET UNITYSDK_OFFSET(0x1CD44DA0)
#define SYSTEM_DATA_DATATABLE_SETNEWRECORDWORKER_OFFSET UNITYSDK_OFFSET(0x1CD47020)
#define SYSTEM_DATA_DATATABLE_SETNEWRECORD_OFFSET UNITYSDK_OFFSET(0x1CD44F00)
#define SYSTEM_DATA_DATATABLE_SETOLDRECORD_OFFSET UNITYSDK_OFFSET(0x1CD44FC0)
#define SYSTEM_DATA_DATATABLE_SETSHADOWINDEXES_OFFSET UNITYSDK_OFFSET(0x1CD3FC10)
#define SYSTEM_DATA_DATATABLE_SET_CASESENSITIVE_OFFSET UNITYSDK_OFFSET(0x1CD3F790)
#define SYSTEM_DATA_DATATABLE_SET_ELEMENTCOLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x1CD41490)
#define SYSTEM_DATA_DATATABLE_SET_ENFORCECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1CD40630)
#define SYSTEM_DATA_DATATABLE_SET_LOCALE_OFFSET UNITYSDK_OFFSET(0x1CD40E00)
#define SYSTEM_DATA_DATATABLE_SET_MINIMUMCAPACITY_OFFSET UNITYSDK_OFFSET(0x1CD3D990)
#define SYSTEM_DATA_DATATABLE_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1CD3BB20)
#define SYSTEM_DATA_DATATABLE_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1CD448F0)
#define SYSTEM_DATA_DATATABLE_SET_PRIMARYKEY_OFFSET UNITYSDK_OFFSET(0x1CD41D40)
#define SYSTEM_DATA_DATATABLE_SET_REMOTINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1CD402B0)
#define SYSTEM_DATA_DATATABLE_SET_SITE_OFFSET UNITYSDK_OFFSET(0x1CD46AD0)
#define SYSTEM_DATA_DATATABLE_SET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x1CD42210)
#define SYSTEM_DATA_DATATABLE_SET_XMLTEXT_OFFSET UNITYSDK_OFFSET(0x1CD44B00)
#define SYSTEM_DATA_DATATABLE_SHADOWINDEXCOPY_OFFSET UNITYSDK_OFFSET(0x1CD4E150)
#define SYSTEM_DATA_DATATABLE_SILENTLYSETVALUE_OFFSET UNITYSDK_OFFSET(0x1CD4C7A0)
#define SYSTEM_DATA_DATATABLE_SUSPENDINDEXEVENTS_OFFSET UNITYSDK_OFFSET(0x1CD3FC70)
#define SYSTEM_DATA_DATATABLE_SYSTEM_COMPONENTMODEL_ILISTSOURCE_GETLIST_OFFSET UNITYSDK_OFFSET(0x1CD49AA0)
#define SYSTEM_DATA_DATATABLE_SYSTEM_COMPONENTMODEL_ILISTSOURCE_GET_CONTAINSLISTCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1CD491E0)
#define SYSTEM_DATA_DATATABLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x1CD54010)
#define SYSTEM_DATA_DATATABLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x1CD54280)
#define SYSTEM_DATA_DATATABLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x1CD544B0)
#define SYSTEM_DATA_DATATABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD4E1C0)
#define SYSTEM_DATA_DATATABLE_UPDATEPROPERTYDESCRIPTORCOLLECTIONCACHE_OFFSET UNITYSDK_OFFSET(0x1CD4E5E0)
#define SYSTEM_DATA_DATATABLE_UPDATINGCURRENT_OFFSET UNITYSDK_OFFSET(0x1CD4DE10)
#define SYSTEM_DATA_DATATABLE_WRITEXMLSCHEMA_OFFSET UNITYSDK_OFFSET(0x1CD4F520)
#define SYSTEM_DATA_DATATABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x1CD4ECC0)
#define SYSTEM_DATA_DATATABLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD35870)
#define SYSTEM_DATA_DATATABLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CD358D0)
#define SYSTEM_DATA_DATATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD35430)

namespace System::Data
{
	inline static constexpr unsigned int DataTable_TypeDefinitionIndex = 38606;

	class DataTable : public ::System::ComponentModel::MarshalByValueComponent
	{
	public:
		static ::System::Int32* StaticGet_s_objectTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DataTable_TypeDefinitionIndex)->GetStaticField(0x9060);
		}
		::System::Data::DataSet* _dataSet; // 0x20
		::System::Data::DataView* _defaultView; // 0x28
		::System::Int64 _nextRowID; // 0x30
		::System::Data::DataRowCollection* _rowCollection; // 0x38
		::System::Data::DataColumnCollection* _columnCollection; // 0x40
		::System::Data::ConstraintCollection* _constraintCollection; // 0x48
		::System::Int32 _elementColumnCount; // 0x50
		::System::Data::DataRelationCollection* _parentRelationsCollection; // 0x58
		::System::Data::DataRelationCollection* _childRelationsCollection; // 0x60
		::System::Data::RecordManager* _recordManager; // 0x68
		::System::Collections::Generic::List_1<::System::Data::Index*>* _indexes; // 0x70
		::System::Collections::Generic::List_1<::System::Data::Index*>* _shadowIndexes; // 0x78
		::System::Int32 _shadowCount; // 0x80
		::System::Data::PropertyCollection* _extendedProperties; // 0x88
		::System::String* _tableName; // 0x90
		::System::String* _tableNamespace; // 0x98
		::System::String* _tablePrefix; // 0xA0
		::System::Data::DataExpression* _displayExpression; // 0xA8
		::System::Boolean _fNestedInDataset; // 0xB0
		::System::Globalization::CultureInfo* _culture; // 0xB8
		::System::Boolean _cultureUserSet; // 0xC0
		::System::Globalization::CompareInfo* _compareInfo; // 0xC8
		::System::Globalization::CompareOptions _compareFlags; // 0xD0
		::System::IFormatProvider* _formatProvider; // 0xD8
		::System::StringComparer* _hashCodeProvider; // 0xE0
		::System::Boolean _caseSensitive; // 0xE8
		::System::Boolean _caseSensitiveUserSet; // 0xE9
		::System::String* _encodedTableName; // 0xF0
		::System::Data::DataColumn* _xmlText; // 0xF8
		::System::Data::DataColumn* _colUnique; // 0x100
		::System::Boolean _textOnly; // 0x108
		::System::Decimal _minOccurs; // 0x10C
		::System::Decimal _maxOccurs; // 0x11C
		::System::Boolean _repeatableElement; // 0x12C
		::System::Object* _typeName; // 0x130
		::System::Data::UniqueConstraint* _primaryKey; // 0x138
		::Il2CppArray<::System::Data::IndexField>* _primaryIndex; // 0x140
		::Il2CppArray<::System::Data::DataColumn*>* _delayedSetPrimaryKey; // 0x148
		::System::Data::Index* _loadIndex; // 0x150
		::System::Data::Index* _loadIndexwithOriginalAdded; // 0x158
		::System::Data::Index* _loadIndexwithCurrentDeleted; // 0x160
		::System::Int32 _suspendIndexEvents; // 0x168
		::System::Boolean _savedEnforceConstraints; // 0x16C
		::System::Boolean _inDataLoad; // 0x16D
		::System::Boolean _initialLoad; // 0x16E
		::System::Boolean _schemaLoading; // 0x16F
		::System::Boolean _enforceConstraints; // 0x170
		::System::Boolean _suspendEnforceConstraints; // 0x171
		::System::Boolean fInitInProgress; // 0x172
		::System::Boolean _inLoad; // 0x173
		::System::Boolean _fInLoadDiffgram; // 0x174
		::System::Byte _isTypedDataTable; // 0x175
		::Il2CppArray<::System::Data::DataRow*>* _emptyDataRowArray; // 0x178
		::System::ComponentModel::PropertyDescriptorCollection* _propertyDescriptorCollectionCache; // 0x180
		::Il2CppArray<::System::Data::DataRelation*>* _nestedParentRelations; // 0x188
		::System::Collections::Generic::List_1<::System::Data::DataColumn*>* _dependentColumns; // 0x190
		::System::Boolean _mergingData; // 0x198
		::System::Data::DataRowChangeEventHandler* _onRowChangedDelegate; // 0x1A0
		::System::Data::DataRowChangeEventHandler* _onRowChangingDelegate; // 0x1A8
		::System::Data::DataRowChangeEventHandler* _onRowDeletingDelegate; // 0x1B0
		::System::Data::DataRowChangeEventHandler* _onRowDeletedDelegate; // 0x1B8
		::System::Data::DataColumnChangeEventHandler* _onColumnChangedDelegate; // 0x1C0
		::System::Data::DataColumnChangeEventHandler* _onColumnChangingDelegate; // 0x1C8
		::System::Data::DataTableClearEventHandler* _onTableClearingDelegate; // 0x1D0
		::System::Data::DataTableClearEventHandler* _onTableClearedDelegate; // 0x1D8
		::System::Data::DataTableNewRowEventHandler* _onTableNewRowDelegate; // 0x1E0
		::System::ComponentModel::PropertyChangedEventHandler* _onPropertyChangingDelegate; // 0x1E8
		::System::EventHandler* _onInitialized; // 0x1F0
		::System::Data::DataRowBuilder* _rowBuilder; // 0x1F8
		::System::Collections::Generic::List_1<::System::Data::DataView*>* _delayedViews; // 0x200
		::System::Collections::Generic::List_1<::System::Data::DataViewListener*>* _dataViewListeners; // 0x208
		::System::Collections::Hashtable* _rowDiffId; // 0x210
		::System::Threading::ReaderWriterLockSlim* _indexesLock; // 0x218
		::System::Int32 _ukColumnPositionForInference; // 0x220
		::System::Data::SerializationFormat _remotingFormat; // 0x224
		::System::Int32 _objectID; // 0x228

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* tableName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE__CTOR_1_OFFSET))(this, tableName);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE__CTOR_2_OFFSET))(this, info, context);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void SerializeDataTable(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Boolean isSingleTable, ::System::Data::SerializationFormat remotingFormat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Boolean, ::System::Data::SerializationFormat))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SERIALIZEDATATABLE_OFFSET))(this, info, context, isSingleTable, remotingFormat);
		}

		::System::Void DeserializeDataTable(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Boolean isSingleTable, ::System::Data::SerializationFormat remotingFormat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Boolean, ::System::Data::SerializationFormat))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_DESERIALIZEDATATABLE_OFFSET))(this, info, context, isSingleTable, remotingFormat);
		}

		::System::Void SerializeTableSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Boolean isSingleTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SERIALIZETABLESCHEMA_OFFSET))(this, info, context, isSingleTable);
		}

		::System::Void DeserializeTableSchema(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Boolean isSingleTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_DESERIALIZETABLESCHEMA_OFFSET))(this, info, context, isSingleTable);
		}

		::System::Void SerializeConstraints(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Int32 serIndex, ::System::Boolean allConstraints)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SERIALIZECONSTRAINTS_OFFSET))(this, info, context, serIndex, allConstraints);
		}

		::System::Void DeserializeConstraints(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Int32 serIndex, ::System::Boolean allConstraints)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_DESERIALIZECONSTRAINTS_OFFSET))(this, info, context, serIndex, allConstraints);
		}

		::System::Void SerializeExpressionColumns(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Int32 serIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SERIALIZEEXPRESSIONCOLUMNS_OFFSET))(this, info, context, serIndex);
		}

		::System::Void DeserializeExpressionColumns(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Int32 serIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_DESERIALIZEEXPRESSIONCOLUMNS_OFFSET))(this, info, context, serIndex);
		}

		::System::Void SerializeTableData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Int32 serIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SERIALIZETABLEDATA_OFFSET))(this, info, context, serIndex);
		}

		::System::Void DeserializeTableData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context, ::System::Int32 serIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_DESERIALIZETABLEDATA_OFFSET))(this, info, context, serIndex);
		}

		::System::Data::DataRowState ConvertToRowState(::System::Collections::BitArray* bitStates, ::System::Int32 bitIndex)
		{
			return ((::System::Data::DataRowState(*)(::PVOID, ::System::Collections::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CONVERTTOROWSTATE_OFFSET))(this, bitStates, bitIndex);
		}

		::System::Void GetRowAndColumnErrors(::System::Int32 rowIndex, ::System::Collections::Hashtable* rowErrors, ::System::Collections::Hashtable* colErrors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Hashtable*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GETROWANDCOLUMNERRORS_OFFSET))(this, rowIndex, rowErrors, colErrors);
		}

		::System::Void ConvertToRowError(::System::Int32 rowIndex, ::System::Collections::Hashtable* rowErrors, ::System::Collections::Hashtable* colErrors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Hashtable*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CONVERTTOROWERROR_OFFSET))(this, rowIndex, rowErrors, colErrors);
		}

		::System::Void set_CaseSensitive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_CASESENSITIVE_OFFSET))(this, value);
		}

		::System::Boolean get_AreIndexEventsSuspended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_AREINDEXEVENTSSUSPENDED_OFFSET))(this);
		}

		::System::Void RestoreIndexEvents(::System::Boolean forceReset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RESTOREINDEXEVENTS_OFFSET))(this, forceReset);
		}

		::System::Void SuspendIndexEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SUSPENDINDEXEVENTS_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Boolean get_IsTypedDataTable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_ISTYPEDDATATABLE_OFFSET))(this);
		}

		::System::Boolean SetCaseSensitiveValue(::System::Boolean isCaseSensitive, ::System::Boolean userSet, ::System::Boolean resetIndexes)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SETCASESENSITIVEVALUE_OFFSET))(this, isCaseSensitive, userSet, resetIndexes);
		}

		::System::Boolean get_SelfNested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_SELFNESTED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Data::Index*>* get_LiveIndexes()
		{
			return ((::System::Collections::Generic::List_1<::System::Data::Index*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_LIVEINDEXES_OFFSET))(this);
		}

		::System::Void set_RemotingFormat(::System::Data::SerializationFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::SerializationFormat))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_REMOTINGFORMAT_OFFSET))(this, value);
		}

		::System::Data::DataRelationCollection* get_ChildRelations()
		{
			return ((::System::Data::DataRelationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_CHILDRELATIONS_OFFSET))(this);
		}

		::System::Data::DataColumnCollection* get_Columns()
		{
			return ((::System::Data::DataColumnCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_COLUMNS_OFFSET))(this);
		}

		::System::Globalization::CompareInfo* get_CompareInfo()
		{
			return ((::System::Globalization::CompareInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_COMPAREINFO_OFFSET))(this);
		}

		::System::Void ResetConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RESETCONSTRAINTS_OFFSET))(this);
		}

		::System::Void SetDataSet(::System::Data::DataSet* dataSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SETDATASET_OFFSET))(this, dataSet);
		}

		::System::Data::DataView* get_DefaultView()
		{
			return ((::System::Data::DataView*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_DEFAULTVIEW_OFFSET))(this);
		}

		::System::String* get_DisplayExpressionInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_DISPLAYEXPRESSIONINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_EnforceConstraints()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_ENFORCECONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_EnforceConstraints(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_ENFORCECONSTRAINTS_OFFSET))(this, value);
		}

		::System::Void EnableConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ENABLECONSTRAINTS_OFFSET))(this);
		}

		::System::Data::PropertyCollection* get_ExtendedProperties()
		{
			return ((::System::Data::PropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_EXTENDEDPROPERTIES_OFFSET))(this);
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_FORMATPROVIDER_OFFSET))(this);
		}

		::System::Void set_Locale(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_LOCALE_OFFSET))(this, value);
		}

		::System::Boolean SetLocaleValue(::System::Globalization::CultureInfo* culture, ::System::Boolean userSet, ::System::Boolean resetIndexes)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SETLOCALEVALUE_OFFSET))(this, culture, userSet, resetIndexes);
		}

		::System::Int32 get_MinimumCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_MINIMUMCAPACITY_OFFSET))(this);
		}

		::System::Void set_MinimumCapacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_MINIMUMCAPACITY_OFFSET))(this, value);
		}

		::System::Int32 get_RecordCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_RECORDCAPACITY_OFFSET))(this);
		}

		::System::Void set_ElementColumnCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_ELEMENTCOLUMNCOUNT_OFFSET))(this, value);
		}

		::System::Data::DataRelationCollection* get_ParentRelations()
		{
			return ((::System::Data::DataRelationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_PARENTRELATIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataRelation*>* get_NestedParentRelations()
		{
			return ((::Il2CppArray<::System::Data::DataRelation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_NESTEDPARENTRELATIONS_OFFSET))(this);
		}

		::System::Void CacheNestedParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CACHENESTEDPARENT_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataRelation*>* FindNestedParentRelations()
		{
			return ((::Il2CppArray<::System::Data::DataRelation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_FINDNESTEDPARENTRELATIONS_OFFSET))(this);
		}

		::System::Int32 get_NestedParentsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_NESTEDPARENTSCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataColumn*>* get_PrimaryKey()
		{
			return ((::Il2CppArray<::System::Data::DataColumn*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_PRIMARYKEY_OFFSET))(this);
		}

		::System::Void set_PrimaryKey(::Il2CppArray<::System::Data::DataColumn*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_PRIMARYKEY_OFFSET))(this, value);
		}

		::System::Data::DataRowCollection* get_Rows()
		{
			return ((::System::Data::DataRowCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_ROWS_OFFSET))(this);
		}

		::System::Void set_TableName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_TABLENAME_OFFSET))(this, value);
		}

		::System::String* get_EncodedTableName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_ENCODEDTABLENAME_OFFSET))(this);
		}

		::System::String* GetInheritedNamespace(::System::Collections::Generic::List_1<::System::Data::DataTable*>* visitedTables)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GETINHERITEDNAMESPACE_OFFSET))(this, visitedTables);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Void set_Namespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_NAMESPACE_OFFSET))(this, value);
		}

		::System::Boolean IsNamespaceInherited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ISNAMESPACEINHERITED_OFFSET))(this);
		}

		::System::Void CheckCascadingNamespaceConflict(::System::String* realNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CHECKCASCADINGNAMESPACECONFLICT_OFFSET))(this, realNamespace);
		}

		::System::Void CheckNamespaceValidityForNestedRelations(::System::String* realNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CHECKNAMESPACEVALIDITYFORNESTEDRELATIONS_OFFSET))(this, realNamespace);
		}

		::System::Void CheckNamespaceValidityForNestedParentRelations(::System::String* ns, ::System::Data::DataTable* parentTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CHECKNAMESPACEVALIDITYFORNESTEDPARENTRELATIONS_OFFSET))(this, ns, parentTable);
		}

		::System::Void DoRaiseNamespaceChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_DORAISENAMESPACECHANGE_OFFSET))(this);
		}

		::System::Void BeginInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_BEGININIT_OFFSET))(this);
		}

		::System::Void EndInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ENDINIT_OFFSET))(this);
		}

		::System::Void set_Prefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_PREFIX_OFFSET))(this, value);
		}

		::System::Void set_XmlText(::System::Data::DataColumn* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_XMLTEXT_OFFSET))(this, value);
		}

		::System::Void SetKeyValues(::System::Data::DataKey key, ::Il2CppArray<::System::Object*>* keyValues, ::System::Int32 record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataKey, ::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SETKEYVALUES_OFFSET))(this, key, keyValues, record);
		}

		::System::Data::DataRow* FindByIndex(::System::Data::Index* ndx, ::Il2CppArray<::System::Object*>* key)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Data::Index*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_FINDBYINDEX_OFFSET))(this, ndx, key);
		}

		::System::Data::DataRow* FindMergeTarget(::System::Data::DataRow* row, ::System::Data::DataKey key, ::System::Data::Index* ndx)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataKey, ::System::Data::Index*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_FINDMERGETARGET_OFFSET))(this, row, key, ndx);
		}

		::System::Void SetMergeRecords(::System::Data::DataRow* row, ::System::Int32 newRecord, ::System::Int32 oldRecord, ::System::Data::DataRowAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Int32, ::System::Int32, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SETMERGERECORDS_OFFSET))(this, row, newRecord, oldRecord, action);
		}

		::System::Data::DataRow* MergeRow(::System::Data::DataRow* row, ::System::Data::DataRow* targetRow, ::System::Boolean preserveChanges, ::System::Data::Index* idxSearch)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRow*, ::System::Boolean, ::System::Data::Index*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_MERGEROW_OFFSET))(this, row, targetRow, preserveChanges, idxSearch);
		}

		::System::Data::DataTable* CreateInstance()
		{
			return ((::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CREATEINSTANCE_OFFSET))(this);
		}

		::System::Data::DataTable* Clone()
		{
			return ((::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CLONE_OFFSET))(this);
		}

		::System::Data::DataTable* Clone_1(::System::Data::DataSet* cloneDS)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CLONE_1_OFFSET))(this, cloneDS);
		}

		::System::Data::DataTable* IncrementalCloneTo(::System::Data::DataTable* sourceTable, ::System::Data::DataTable* targetTable)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Data::DataTable*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_INCREMENTALCLONETO_OFFSET))(this, sourceTable, targetTable);
		}

		::System::Data::DataTable* CloneHierarchy(::System::Data::DataTable* sourceTable, ::System::Data::DataSet* ds, ::System::Collections::Hashtable* visitedMap)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Data::DataTable*, ::System::Data::DataSet*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CLONEHIERARCHY_OFFSET))(this, sourceTable, ds, visitedMap);
		}

		::System::Data::DataTable* CloneTo(::System::Data::DataTable* clone, ::System::Data::DataSet* cloneDS, ::System::Boolean skipExpressionColumns)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Data::DataTable*, ::System::Data::DataSet*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CLONETO_OFFSET))(this, clone, cloneDS, skipExpressionColumns);
		}

		::System::Void add_Initialized(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ADD_INITIALIZED_OFFSET))(this, value);
		}

		::System::Void remove_Initialized(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_REMOVE_INITIALIZED_OFFSET))(this, value);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_SITE_OFFSET))(this);
		}

		::System::Void set_Site(::System::ComponentModel::ISite* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ISite*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SET_SITE_OFFSET))(this, value);
		}

		::System::Void AddRow(::System::Data::DataRow* row, ::System::Int32 proposedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ADDROW_OFFSET))(this, row, proposedID);
		}

		::System::Void InsertRow(::System::Data::DataRow* row, ::System::Int32 proposedID, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_INSERTROW_OFFSET))(this, row, proposedID, pos);
		}

		::System::Void InsertRow_1(::System::Data::DataRow* row, ::System::Int64 proposedID, ::System::Int32 pos, ::System::Boolean fireEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Int64, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_INSERTROW_1_OFFSET))(this, row, proposedID, pos, fireEvent);
		}

		::System::Void CheckNotModifying(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CHECKNOTMODIFYING_OFFSET))(this, row);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CLEAR_OFFSET))(this);
		}

		::System::Void Clear_1(::System::Boolean clearAll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CLEAR_1_OFFSET))(this, clearAll);
		}

		::System::Void CascadeAll(::System::Data::DataRow* row, ::System::Data::DataRowAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CASCADEALL_OFFSET))(this, row, action);
		}

		::System::Void CommitRow(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_COMMITROW_OFFSET))(this, row);
		}

		::System::Int32 Compare(::System::String* s1, ::System::String* s2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_COMPARE_OFFSET))(this, s1, s2);
		}

		::System::Int32 Compare_1(::System::String* s1, ::System::String* s2, ::System::Globalization::CompareInfo* comparer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Globalization::CompareInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_COMPARE_1_OFFSET))(this, s1, s2, comparer);
		}

		::System::Int32 IndexOf(::System::String* s1, ::System::String* s2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_INDEXOF_OFFSET))(this, s1, s2);
		}

		::System::Boolean IsSuffix(::System::String* s1, ::System::String* s2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ISSUFFIX_OFFSET))(this, s1, s2);
		}

		::System::Object* Compute(::System::String* expression, ::System::String* filter)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_COMPUTE_OFFSET))(this, expression, filter);
		}

		::System::Boolean System_ComponentModel_IListSource_get_ContainsListCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SYSTEM_COMPONENTMODEL_ILISTSOURCE_GET_CONTAINSLISTCOLLECTION_OFFSET))(this);
		}

		::System::Void DeleteRow(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_DELETEROW_OFFSET))(this, row);
		}

		::System::String* FormatSortString(::Il2CppArray<::System::Data::IndexField>* indexDesc)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Data::IndexField>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_FORMATSORTSTRING_OFFSET))(this, indexDesc);
		}

		::System::Void FreeRecord(::System::Int32& record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_FREERECORD_OFFSET))(this, record);
		}

		::System::Data::Index* GetIndex(::System::String* sort, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter)
		{
			return ((::System::Data::Index*(*)(::PVOID, ::System::String*, ::System::Data::DataViewRowState, ::System::Data::IFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GETINDEX_OFFSET))(this, sort, recordStates, rowFilter);
		}

		::System::Data::Index* GetIndex_1(::Il2CppArray<::System::Data::IndexField>* indexDesc, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter)
		{
			return ((::System::Data::Index*(*)(::PVOID, ::Il2CppArray<::System::Data::IndexField>*, ::System::Data::DataViewRowState, ::System::Data::IFilter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GETINDEX_1_OFFSET))(this, indexDesc, recordStates, rowFilter);
		}

		::System::Collections::IList* System_ComponentModel_IListSource_GetList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SYSTEM_COMPONENTMODEL_ILISTSOURCE_GETLIST_OFFSET))(this);
		}

		::System::Int32 GetSpecialHashCode(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GETSPECIALHASHCODE_OFFSET))(this, name);
		}

		::System::Void InsertRow_2(::System::Data::DataRow* row, ::System::Int64 proposedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_INSERTROW_2_OFFSET))(this, row, proposedID);
		}

		::System::Int32 NewRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_NEWRECORD_OFFSET))(this);
		}

		::System::Int32 NewUninitializedRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_NEWUNINITIALIZEDRECORD_OFFSET))(this);
		}

		::System::Int32 NewRecord_1(::System::Int32 sourceRecord)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_NEWRECORD_1_OFFSET))(this, sourceRecord);
		}

		::System::Data::DataRow* NewEmptyRow()
		{
			return ((::System::Data::DataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_NEWEMPTYROW_OFFSET))(this);
		}

		::System::Data::DataRow* NewUninitializedRow()
		{
			return ((::System::Data::DataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_NEWUNINITIALIZEDROW_OFFSET))(this);
		}

		::System::Data::DataRow* NewRow()
		{
			return ((::System::Data::DataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_NEWROW_OFFSET))(this);
		}

		::System::Data::DataRow* CreateEmptyRow()
		{
			return ((::System::Data::DataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CREATEEMPTYROW_OFFSET))(this);
		}

		::System::Void NewRowCreated(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_NEWROWCREATED_OFFSET))(this, row);
		}

		::System::Data::DataRow* NewRow_1(::System::Int32 record)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_NEWROW_1_OFFSET))(this, record);
		}

		::System::Data::DataRow* NewRowFromBuilder(::System::Data::DataRowBuilder* builder)
		{
			return ((::System::Data::DataRow*(*)(::PVOID, ::System::Data::DataRowBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_NEWROWFROMBUILDER_OFFSET))(this, builder);
		}

		::System::Type* GetRowType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GETROWTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::DataRow*>* NewRowArray(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_NEWROWARRAY_OFFSET))(this, size);
		}

		::System::Boolean get_NeedColumnChangeEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_NEEDCOLUMNCHANGEEVENTS_OFFSET))(this);
		}

		::System::Void OnColumnChanging(::System::Data::DataColumnChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumnChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONCOLUMNCHANGING_OFFSET))(this, e);
		}

		::System::Void OnColumnChanged(::System::Data::DataColumnChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumnChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONCOLUMNCHANGED_OFFSET))(this, e);
		}

		::System::Void OnPropertyChanging(::System::ComponentModel::PropertyChangedEventArgs* pcevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONPROPERTYCHANGING_OFFSET))(this, pcevent);
		}

		::System::Void OnRemoveColumnInternal(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONREMOVECOLUMNINTERNAL_OFFSET))(this, column);
		}

		::System::Data::DataRowChangeEventArgs* OnRowChanged(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow, ::System::Data::DataRowAction eAction)
		{
			return ((::System::Data::DataRowChangeEventArgs*(*)(::PVOID, ::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONROWCHANGED_OFFSET))(this, args, eRow, eAction);
		}

		::System::Data::DataRowChangeEventArgs* OnRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow, ::System::Data::DataRowAction eAction)
		{
			return ((::System::Data::DataRowChangeEventArgs*(*)(::PVOID, ::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONROWCHANGING_OFFSET))(this, args, eRow, eAction);
		}

		::System::Void OnRowChanged_1(::System::Data::DataRowChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRowChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONROWCHANGED_1_OFFSET))(this, e);
		}

		::System::Void OnRowChanging_1(::System::Data::DataRowChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRowChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONROWCHANGING_1_OFFSET))(this, e);
		}

		::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRowChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONROWDELETING_OFFSET))(this, e);
		}

		::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRowChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONROWDELETED_OFFSET))(this, e);
		}

		::System::Void OnTableCleared(::System::Data::DataTableClearEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTableClearEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONTABLECLEARED_OFFSET))(this, e);
		}

		::System::Void OnTableClearing(::System::Data::DataTableClearEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTableClearEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONTABLECLEARING_OFFSET))(this, e);
		}

		::System::Void OnTableNewRow(::System::Data::DataTableNewRowEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTableNewRowEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONTABLENEWROW_OFFSET))(this, e);
		}

		::System::Void OnInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ONINITIALIZED_OFFSET))(this);
		}

		::Il2CppArray<::System::Data::IndexField>* ParseSortString(::System::String* sortString)
		{
			return ((::Il2CppArray<::System::Data::IndexField>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_PARSESORTSTRING_OFFSET))(this, sortString);
		}

		::System::Void RaisePropertyChanging(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RAISEPROPERTYCHANGING_OFFSET))(this, name);
		}

		::System::Void RecordChanged(::System::Int32 record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RECORDCHANGED_OFFSET))(this, record);
		}

		::System::Void RecordChanged_1(::Il2CppArray<::System::Int32>* oldIndex, ::Il2CppArray<::System::Int32>* newIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RECORDCHANGED_1_OFFSET))(this, oldIndex, newIndex);
		}

		::System::Void RecordStateChanged(::System::Int32 record, ::System::Data::DataViewRowState oldState, ::System::Data::DataViewRowState newState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RECORDSTATECHANGED_OFFSET))(this, record, oldState, newState);
		}

		::System::Void RecordStateChanged_1(::System::Int32 record1, ::System::Data::DataViewRowState oldState1, ::System::Data::DataViewRowState newState1, ::System::Int32 record2, ::System::Data::DataViewRowState oldState2, ::System::Data::DataViewRowState newState2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState, ::System::Int32, ::System::Data::DataViewRowState, ::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RECORDSTATECHANGED_1_OFFSET))(this, record1, oldState1, newState1, record2, oldState2, newState2);
		}

		::Il2CppArray<::System::Int32>* RemoveRecordFromIndexes(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_REMOVERECORDFROMINDEXES_OFFSET))(this, row, version);
		}

		::Il2CppArray<::System::Int32>* InsertRecordToIndexes(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_INSERTRECORDTOINDEXES_OFFSET))(this, row, version);
		}

		::System::Void SilentlySetValue(::System::Data::DataRow* dr, ::System::Data::DataColumn* dc, ::System::Data::DataRowVersion version, ::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::Data::DataRowVersion, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SILENTLYSETVALUE_OFFSET))(this, dr, dc, version, newValue);
		}

		::System::Void RemoveRow(::System::Data::DataRow* row, ::System::Boolean check)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_REMOVEROW_OFFSET))(this, row, check);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RESET_OFFSET))(this);
		}

		::System::Void ResetIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RESETINDEXES_OFFSET))(this);
		}

		::System::Void ResetInternalIndexes(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RESETINTERNALINDEXES_OFFSET))(this, column);
		}

		::System::Void RollbackRow(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ROLLBACKROW_OFFSET))(this, row);
		}

		::System::Data::DataRowChangeEventArgs* RaiseRowChanged(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow, ::System::Data::DataRowAction eAction)
		{
			return ((::System::Data::DataRowChangeEventArgs*(*)(::PVOID, ::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RAISEROWCHANGED_OFFSET))(this, args, eRow, eAction);
		}

		::System::Data::DataRowChangeEventArgs* RaiseRowChanging(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow, ::System::Data::DataRowAction eAction)
		{
			return ((::System::Data::DataRowChangeEventArgs*(*)(::PVOID, ::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RAISEROWCHANGING_OFFSET))(this, args, eRow, eAction);
		}

		::System::Data::DataRowChangeEventArgs* RaiseRowChanging_1(::System::Data::DataRowChangeEventArgs* args, ::System::Data::DataRow* eRow, ::System::Data::DataRowAction eAction, ::System::Boolean fireEvent)
		{
			return ((::System::Data::DataRowChangeEventArgs*(*)(::PVOID, ::System::Data::DataRowChangeEventArgs*, ::System::Data::DataRow*, ::System::Data::DataRowAction, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RAISEROWCHANGING_1_OFFSET))(this, args, eRow, eAction, fireEvent);
		}

		::Il2CppArray<::System::Data::DataRow*>* Select(::System::String* filterExpression, ::System::String* sort, ::System::Data::DataViewRowState recordStates)
		{
			return ((::Il2CppArray<::System::Data::DataRow*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Data::DataViewRowState))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SELECT_OFFSET))(this, filterExpression, sort, recordStates);
		}

		::System::Void SetNewRecord(::System::Data::DataRow* row, ::System::Int32 proposedRecord, ::System::Data::DataRowAction action, ::System::Boolean isInMerge, ::System::Boolean fireEvent, ::System::Boolean suppressEnsurePropertyChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Int32, ::System::Data::DataRowAction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SETNEWRECORD_OFFSET))(this, row, proposedRecord, action, isInMerge, fireEvent, suppressEnsurePropertyChanged);
		}

		::System::Void SetNewRecordWorker(::System::Data::DataRow* row, ::System::Int32 proposedRecord, ::System::Data::DataRowAction action, ::System::Boolean isInMerge, ::System::Boolean suppressEnsurePropertyChanged, ::System::Int32 position, ::System::Boolean fireEvent, ::System::Exception*& deferredException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Int32, ::System::Data::DataRowAction, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Exception*&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SETNEWRECORDWORKER_OFFSET))(this, row, proposedRecord, action, isInMerge, suppressEnsurePropertyChanged, position, fireEvent, deferredException);
		}

		::System::Void SetOldRecord(::System::Data::DataRow* row, ::System::Int32 proposedRecord)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SETOLDRECORD_OFFSET))(this, row, proposedRecord);
		}

		::System::Void RestoreShadowIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RESTORESHADOWINDEXES_OFFSET))(this);
		}

		::System::Void SetShadowIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SETSHADOWINDEXES_OFFSET))(this);
		}

		::System::Void ShadowIndexCopy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SHADOWINDEXCOPY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean UpdatingCurrent(::System::Data::DataRow* row, ::System::Data::DataRowAction action)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_UPDATINGCURRENT_OFFSET))(this, row, action);
		}

		::System::Data::DataColumn* AddUniqueKey(::System::Int32 position)
		{
			return ((::System::Data::DataColumn*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ADDUNIQUEKEY_OFFSET))(this, position);
		}

		::System::Data::DataColumn* AddUniqueKey_1()
		{
			return ((::System::Data::DataColumn*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ADDUNIQUEKEY_1_OFFSET))(this);
		}

		::System::Data::DataColumn* AddForeignKey(::System::Data::DataColumn* parentKey)
		{
			return ((::System::Data::DataColumn*(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ADDFOREIGNKEY_OFFSET))(this, parentKey);
		}

		::System::Void UpdatePropertyDescriptorCollectionCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_UPDATEPROPERTYDESCRIPTORCOLLECTIONCACHE_OFFSET))(this);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetPropertyDescriptorCollection(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GETPROPERTYDESCRIPTORCOLLECTION_OFFSET))(this, attributes);
		}

		::System::Xml::XmlQualifiedName* get_TypeName()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_TYPENAME_OFFSET))(this);
		}

		::System::Void Merge(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_MERGE_OFFSET))(this, table);
		}

		::System::Void Merge_1(::System::Data::DataTable* table, ::System::Boolean preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean, ::System::Data::MissingSchemaAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_MERGE_1_OFFSET))(this, table, preserveChanges, missingSchemaAction);
		}

		::System::Void WriteXml(::System::Xml::XmlWriter* writer, ::System::Data::XmlWriteMode mode, ::System::Boolean writeHierarchy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Data::XmlWriteMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_WRITEXML_OFFSET))(this, writer, mode, writeHierarchy);
		}

		::System::Boolean CheckForClosureOnExpressions(::System::Data::DataTable* dt, ::System::Boolean writeHierarchy)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CHECKFORCLOSUREONEXPRESSIONS_OFFSET))(this, dt, writeHierarchy);
		}

		::System::Boolean CheckForClosureOnExpressionTables(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CHECKFORCLOSUREONEXPRESSIONTABLES_OFFSET))(this, tableList);
		}

		::System::Void WriteXmlSchema(::System::Xml::XmlWriter* writer, ::System::Boolean writeHierarchy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_WRITEXMLSCHEMA_OFFSET))(this, writer, writeHierarchy);
		}

		::System::Void RestoreConstraint(::System::Boolean originalEnforceConstraint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_RESTORECONSTRAINT_OFFSET))(this, originalEnforceConstraint);
		}

		::System::Boolean IsEmptyXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ISEMPTYXML_OFFSET))(this, reader);
		}

		::System::Data::XmlReadMode ReadXml(::System::Xml::XmlReader* reader, ::System::Data::XmlReadMode mode, ::System::Boolean denyResolving)
		{
			return ((::System::Data::XmlReadMode(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Data::XmlReadMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_READXML_OFFSET))(this, reader, mode, denyResolving);
		}

		::System::Void ReadEndElement(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_READENDELEMENT_OFFSET))(this, reader);
		}

		::System::Void ReadXDRSchema(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_READXDRSCHEMA_OFFSET))(this, reader);
		}

		::System::Boolean MoveToElement(::System::Xml::XmlReader* reader, ::System::Int32 depth)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_MOVETOELEMENT_OFFSET))(this, reader, depth);
		}

		::System::Void ReadXmlDiffgram(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_READXMLDIFFGRAM_OFFSET))(this, reader);
		}

		::System::Void ReadXSDSchema(::System::Xml::XmlReader* reader, ::System::Boolean denyResolving)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_READXSDSCHEMA_OFFSET))(this, reader, denyResolving);
		}

		::System::Void ReadXmlSchema(::System::Xml::XmlReader* reader, ::System::Boolean denyResolving)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_READXMLSCHEMA_OFFSET))(this, reader, denyResolving);
		}

		::System::Void CreateTableList(::System::Data::DataTable* currentTable, ::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CREATETABLELIST_OFFSET))(this, currentTable, tableList);
		}

		::System::Void CreateRelationList(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList, ::System::Collections::Generic::List_1<::System::Data::DataRelation*>* relationList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*, ::System::Collections::Generic::List_1<::System::Data::DataRelation*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_CREATERELATIONLIST_OFFSET))(this, tableList, relationList);
		}

		static ::System::Xml::Schema::XmlSchemaComplexType* GetDataTableSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::Schema::XmlSchemaComplexType*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GETDATATABLESCHEMA_OFFSET))(schemaSet);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		::System::Void ReadXmlSerializable(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_READXMLSERIALIZABLE_OFFSET))(this, reader);
		}

		::System::Collections::Hashtable* get_RowDiffId()
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_GET_ROWDIFFID_OFFSET))(this);
		}

		::System::Void AddDependentColumn(::System::Data::DataColumn* expressionColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_ADDDEPENDENTCOLUMN_OFFSET))(this, expressionColumn);
		}

		::System::Void RemoveDependentColumn(::System::Data::DataColumn* expressionColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_REMOVEDEPENDENTCOLUMN_OFFSET))(this, expressionColumn);
		}

		::System::Void EvaluateExpressions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_EVALUATEEXPRESSIONS_OFFSET))(this);
		}

		::System::Void EvaluateExpressions_1(::System::Data::DataRow* row, ::System::Data::DataRowAction action, ::System::Collections::Generic::List_1<::System::Data::DataRow*>* cachedRows)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowAction, ::System::Collections::Generic::List_1<::System::Data::DataRow*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_EVALUATEEXPRESSIONS_1_OFFSET))(this, row, action, cachedRows);
		}

		::System::Void EvaluateExpressions_2(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_EVALUATEEXPRESSIONS_2_OFFSET))(this, column);
		}

		::System::Void EvaluateDependentExpressions(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_EVALUATEDEPENDENTEXPRESSIONS_OFFSET))(this, column);
		}

		::System::Void EvaluateDependentExpressions_1(::System::Collections::Generic::List_1<::System::Data::DataColumn*>* columns, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version, ::System::Collections::Generic::List_1<::System::Data::DataRow*>* cachedRows)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*, ::System::Data::DataRow*, ::System::Data::DataRowVersion, ::System::Collections::Generic::List_1<::System::Data::DataRow*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLE_EVALUATEDEPENDENTEXPRESSIONS_1_OFFSET))(this, columns, row, version, cachedRows);
		}
	};
}
