// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

namespace odb
{
  // transaction
  //

  // withdrawal
  //

  inline
  access::object_traits< ::withdrawal >::id_type
  access::object_traits< ::withdrawal >::
  id (const object_type& o)
  {
    return o._id;
  }

  inline
  void access::object_traits< ::withdrawal >::
  callback (database& db, object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }

  inline
  void access::object_traits< ::withdrawal >::
  callback (database& db, const object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }

  // deposit
  //

  inline
  access::object_traits< ::deposit >::id_type
  access::object_traits< ::deposit >::
  id (const object_type& o)
  {
    return o._id;
  }

  inline
  void access::object_traits< ::deposit >::
  callback (database& db, object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }

  inline
  void access::object_traits< ::deposit >::
  callback (database& db, const object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }

  // transfer
  //

  inline
  access::object_traits< ::transfer >::id_type
  access::object_traits< ::transfer >::
  id (const object_type& o)
  {
    return o._id;
  }

  inline
  void access::object_traits< ::transfer >::
  callback (database& db, object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }

  inline
  void access::object_traits< ::transfer >::
  callback (database& db, const object_type& x, callback_event e)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (x);
    ODB_POTENTIALLY_UNUSED (e);
  }
}

namespace odb
{
  // transaction
  //

  // withdrawal
  //

  inline
  void access::object_traits_impl< ::withdrawal, id_sqlite >::
  erase (database& db, const object_type& obj)
  {
    callback (db, obj, callback_event::pre_erase);
    erase (db, id (obj));
    callback (db, obj, callback_event::post_erase);
  }

  inline
  void access::object_traits_impl< ::withdrawal, id_sqlite >::
  load_ (statements_type& sts,
         object_type& obj,
         bool)
  {
    ODB_POTENTIALLY_UNUSED (sts);
    ODB_POTENTIALLY_UNUSED (obj);
  }

  // deposit
  //

  inline
  void access::object_traits_impl< ::deposit, id_sqlite >::
  erase (database& db, const object_type& obj)
  {
    callback (db, obj, callback_event::pre_erase);
    erase (db, id (obj));
    callback (db, obj, callback_event::post_erase);
  }

  inline
  void access::object_traits_impl< ::deposit, id_sqlite >::
  load_ (statements_type& sts,
         object_type& obj,
         bool)
  {
    ODB_POTENTIALLY_UNUSED (sts);
    ODB_POTENTIALLY_UNUSED (obj);
  }

  // transfer
  //

  inline
  void access::object_traits_impl< ::transfer, id_sqlite >::
  erase (database& db, const object_type& obj)
  {
    callback (db, obj, callback_event::pre_erase);
    erase (db, id (obj));
    callback (db, obj, callback_event::post_erase);
  }

  inline
  void access::object_traits_impl< ::transfer, id_sqlite >::
  load_ (statements_type& sts,
         object_type& obj,
         bool)
  {
    ODB_POTENTIALLY_UNUSED (sts);
    ODB_POTENTIALLY_UNUSED (obj);
  }
}

